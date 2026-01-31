int *plusone(int *digits,int digitsSize,int *returnSize)
{
    int sum,carry = 1;
    int *incrimented = (int *)malloc(sizeof(int)*(digitsSize + 1));
    for(int i = digitsSize-1;i>=0;i--){
        sum = digits[i]+carry;
        if(sum>9){
            carry = sum%10;
            digits[i] = sum - 10*carry;
        }else{
            carry = 0;
            digits[i] = sum;
        }
    }
    incrimented[0]=1;
    for(int i = flag;i<(digitsSize+carry);i++)
        incrimented[i]=digits[i-carry];
    *returnSize = digitsSize+carry;
    return icrimented;
}
