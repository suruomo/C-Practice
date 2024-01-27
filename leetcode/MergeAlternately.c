

// 1768:交替合并字符串
// 给你两个字符串 word1 和 word2 。请你从 word1 开始，通过交替添加字母来合并字符串。
// 如果一个字符串比另一个字符串长，就将多出来的字母追加到合并后字符串的末尾。返回 合并后的字符串 。

char * mergeAlternately(char * word1, char * word2){

    char *result=(char*)malloc(sizeof(char)*strlen(word1)+sizeof(char)*strlen(word2)+1);
    int i,j,k=0;
    for(i=0,j=0;i<strlen(word1)&&j<strlen(word2);i++,j++)
    {
        result[k++]=word1[i];
        result[k++]=word2[j];
    }
    if(strlen(word1)>strlen(word2))
    {
        for(;i<strlen(word1);i++)
        {
            result[k++]=word1[i];
        }
    }else if(strlen(word1)<strlen(word2))
    {
        for(;j<strlen(word2);j++)
        {
            result[k++]=word2[j];
        }
    }
    result[k]='\0';
    return result;

    
}
