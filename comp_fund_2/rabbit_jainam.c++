#include <iostream>
#include <string>
#include <queue>
#include<map>
using namespace std;

    map<string,vector<string>>mp;


class node
{
public:
    string str;
    node *l2;
    node *l1;
    node *r1;
    node *r2;
    node(string string)
    {
        this->str = string;
        this->l2 = NULL;
        this->l1 = NULL;
        this->r1 = NULL;
        this->r2 = NULL;
    }
};
string swap(string str, int p1, int p2)
{
    char temp = str[p1];
    str[p1] = str[p2];
    str[p2] = temp;
    return str;
}
string genratel2(string str)
{
    int index;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '_')
        {
            index = i;
            break;
        }
    }
    if (index == str.length() - 1 || index == str.length() - 2)
    {
        return "-------";
    }
    else if (str[index + 2] != 'L')
    {
        return "-------";
    }
    else
    {
        str = swap(str, index, index + 2);
        return str;
    }
}
string genratel1(string str)
{
    int index;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '_')
        {
            index = i;
            break;
        }
    }
    if (index == str.length() - 1)
    {
        return "-------";
    }
    else if (str[index + 1] != 'L')
    {
        return "-------";
    }
    else
    {
        str = swap(str, index, index + 1);
        return str;
    }
}
string genrater1(string str)
{
    int index;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '_')
        {
            index = i;
            break;
        }
    }
    if (index == 0)
    {
        return "-------";
    }
    else if (str[index - 1] != 'R')
    {
        return "-------";
    }
    else
    {
        str = swap(str, index, index - 1);
        return str;
    }
}
string genrater2(string str)
{
    int index;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '_')
        {
            index = i;
            break;
        }
    }
    if (index == 1 || index == 0)
    {
        return "-------";
    }
    else if (str[index - 2] != 'R')
    {
        return "-------";
    }
    else
    {
        str = swap(str, index, index - 2);
        return str;
    }
}
node *generateTree(node *root)
{
    cout << "Enter starting position: ";
    string temp;
    cin >> temp;
    root = new node(temp);
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        string mvl2 = genratel2(temp->str);
        if (mvl2 != "-------")
        {
            temp->l2 = new node(mvl2);
            q.push(temp->l2);
            //  mp[temp->str].push_back(mvl2);
        }
        string mvl1 = genratel1(temp->str);
        if (mvl1 != "-------")
        {
            temp->l1 = new node(mvl1);
            q.push(temp->l1);
            //  mp[temp->str].push_back(mvl1);
        }
        string mvr1 = genrater1(temp->str);
        if (mvr1 != "-------")
        {
            temp->r1 = new node(mvr1);
            q.push(temp->r1);
            //  mp[temp->str].push_back(mvr1);
        }
        string mvr2 = genrater2(temp->str);
        if (mvr2 != "-------")
        {
            temp->r2 = new node(mvr2);
            q.push(temp->r2);
            //  mp[temp->str].push_back(mvr2);
        }
    }
    return root;
}
void levelorder(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->str << " ";
            if (temp->l2 != NULL)
            {
                q.push(temp->l2);
                // mp[temp->str].push_back(temp->l2->str);
            }
            if (temp->l1 != NULL)
            {
                q.push(temp->l1);
                // mp[temp->str].push_back(temp->l1->str);
            }
            if (temp->r1 != NULL)
            {
                q.push(temp->r1);
                // mp[temp->str].push_back(temp->r1->str);
            }
            if (temp->r2 != NULL)
            {
                q.push(temp->r2);
                // mp[temp->str].push_back(temp->r2->str);
            }
        }
    }
}
int main()
{
    node *root = NULL;
    root = generateTree(root);
    levelorder(root);

     cout<<" new "<<endl;

     for(auto &i:mp){
    //     cout<<i.first<<" ";

        for(auto &j:i.second){
            cout<<j<<" ";
        }
        cout<<endl;
     }

}