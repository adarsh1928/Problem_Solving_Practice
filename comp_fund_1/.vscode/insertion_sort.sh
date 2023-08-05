echo "Enter size of array";
read  n; #get the size of array from user.
echo "Enter the array";
read -a arr;  #get the array form user eg: 2 3 4 5 6
echo "Orignal array is: ${arr[*]}"; #print orignal array


for (( i = 0; i < $n; i++ ))
do
    j=$i-1;
    x=${arr[$i]};
    while [[ $j -gt -1 && ${arr[$j]} -gt $x ]];
    do
        arr[$j+1]=${arr[$j]};
        j=$((j-1));
    done
    arr[$j+1]=$x;      
done
echo "Final sorted Array is ${arr[*]}";