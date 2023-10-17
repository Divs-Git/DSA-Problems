https://www.codingninjas.com/studio/problems/sort-0-1_624379?leftPanelTab=1

void sortZeroesAndOne(int input[], int size)
{
    //Write your code here
    int i = 0;
    int j = size-1;

    while(i < j) {
        while(input[i] == 0 && i < j) {
            i++;
        } 
        while(input[j] == 1 && i < j) {
            j--;
        }

        if(i < j) {
            swap(input[i],input[j]);
            i++;
            j--;
        }
    }
}