int pasos=0,rga=0,fxx=0;
int fx(int n1, int n2){
    if (n1==n2) return 0;
    if (n1>n2) return -1;
    int fa=(2*n1)+3;
    int ga=(3*n1)+2;
    int rga=fx(ga,n2);
    int rfa=fx(fa,n2);
    if (rga==(-1)&& rfa==(-1)) return -1;
    if (rga==(-1)) return rfa+1;
    if (rfa==(-1)) return rga+1;
    if(rfa>rga)return 1+rga;return rfa+1;

}
