

// 1768:����ϲ��ַ���
// ���������ַ��� word1 �� word2 ������� word1 ��ʼ��ͨ�����������ĸ���ϲ��ַ�����
// ���һ���ַ�������һ���ַ��������ͽ����������ĸ׷�ӵ��ϲ����ַ�����ĩβ������ �ϲ�����ַ��� ��

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
