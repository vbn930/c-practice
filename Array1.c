#include <stdio.h>

int GetMaxIndex(int arr[100], int len, int cnt){
    int max = 0;
    int maxIdx = -1;
    for(int i = 0; i < len; i++){
        printf("Cnt: %d, Current val: %d, Max val: %d \n", cnt, arr[i], max);
        if(arr[i] > max){
            max = arr[i];
            maxIdx = i;
        }
    }
    arr[maxIdx] = -1;
    return max;
}

int main()
{
    int max = 0;
    int scores[100] = {0};
    int orderedScores[100] = {0};
    int numStu = 0;
    printf("학생 수 (최대 100명):");
    scanf("%d", &numStu);
    
    for(int i = 0; i < numStu; i++){
        int score = 0;
        printf("학생 %d의 성적: ", i + 1);
        scanf("%d", &score);
        
        if(score > max){
            max = score;
        }
        
        scores[i] = score;
    }
    
    for(int i = 0; i < numStu; i++){
        int max = GetMaxIndex(scores, numStu, i+1);
        orderedScores[i] = max;
    }
    
    for(int i = 0; i < numStu; i++){
        printf("학생 %d: ", i + 1);
        int scoreRatio = orderedScores[i] / 10;
        for(int j = 0; j < scoreRatio; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
