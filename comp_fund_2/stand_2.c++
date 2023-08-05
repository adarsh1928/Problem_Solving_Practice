#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a1, a2, a3, a4;
        cin >> a1 >> a2 >> a3 >> a4; // input number of jokes for each type

        int alice_mood = 0, bob_mood = 0;
        int jokes_told = 0; // keep track of how many jokes have been told

        while (alice_mood >= 0 && bob_mood >= 0)
        {
            // Tell type 1 jokes
            int type1_jokes = min(a1, min(alice_mood + 1, bob_mood + 1));
            a1 -= type1_jokes;
            alice_mood += type1_jokes;
            bob_mood += type1_jokes;
            jokes_told += type1_jokes;

            // Tell type 2 jokes
            int type2_jokes = min(a2, alice_mood + 1);
            a2 -= type2_jokes;
            alice_mood += type2_jokes;
            jokes_told += type2_jokes;

            // Tell type 3 jokes
            int type3_jokes = min(a3, bob_mood + 1);
            a3 -= type3_jokes;
            bob_mood += type3_jokes;
            jokes_told += type3_jokes;

            // Tell type 4 jokes
            int type4_jokes = min(a4, min(alice_mood, bob_mood));
            a4 -= type4_jokes;
            alice_mood -= type4_jokes;
            bob_mood -= type4_jokes;
            jokes_told += type4_jokes;

            // If out of jokes, end show
            if (a1 + a2 + a3 + a4 == 0)
            {
                break;
            }
        }

        cout << jokes_told << endl;
        return 0;
    }
}
