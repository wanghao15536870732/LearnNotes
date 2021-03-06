/*2.4 设计一个算法，将一个顺序表倒置。即，如果顺序表各个结点值存储在一维数组a中，倒
    置的结果是使得数组a中的a[0] 等于原来的最后一个元素，a[1] 等于原来的倒数第2个元
        素，…，a的最后一个元素等于原来的第一个元素。 
【答】：实现顺序表倒置的算法程序如下：*/
void verge(seqlist *L)
{
    int t, i, j;
    i = 0;
    j = L->length - 1;
    while (i < j)
    {
        t = L->data[i];
        L->data[i++] = L->data[j];
        L->data[j--] = t;
    }
}