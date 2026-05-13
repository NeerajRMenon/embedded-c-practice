#include "high_scores.h"
int32_t latest(const int32_t *scores, size_t scores_len){
    return scores[scores_len-1];
}

/// Return the highest score.
int32_t personal_best(const int32_t *scores, size_t scores_len)
{
    int highest=0;
    for(size_t i=0; i<scores_len; i++){
        if(highest<scores[i]){
            highest=scores[i];
        }
    }
    return highest;
}
/// Write the highest scores to `output` (in non-ascending order).
/// Return the number of scores written.
size_t personal_top_three(const int32_t *scores, size_t scores_len,
                          int32_t *output){
int32_t copy[scores_len];
    for(size_t i=0; i<scores_len; i++){
        copy[i]=scores[i];
    }

for(size_t i=0; i<scores_len-1; i++){
    for(size_t j=0; j<scores_len-1-i; j++){
        if(copy[j+1]>copy[j]){
            int temp=copy[j];
            copy[j]=copy[j+1];
            copy[j+1]=temp;
        }
    }
    
}
    // 1. Determine how many we can actually provide
size_t count = (scores_len >= 3) ? 3 : scores_len;

// 2. Write those top scores into the output array
for (size_t i = 0; i < count; i++) {
    output[i] = copy[i];
}

// 3. Return the number of scores written
return count;
    
                          }