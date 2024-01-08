class Solution {
public:
    int minMovesToCaptureTheQueen(int a, int b, int c, int d, int e, int f) {

  if((a==e&&a!=c) || (a==e && a==c && ((d>f && b<f)||(b>f && d<f)||(d<b && b<f)||(f<b && b<d))) || (b==f && b!=d)||(b==f &&b==d && ((e>a && c>e) || (e>c && a>e)|| (e<a && a<c)||(c<a && a<e))) || ((d-c)==(f-e) && (d-c)!=(b-a)) || ((e+f)==(c+d) && (a+b) !=(e+f)) || ((d-c)==(f-e) && (d-c)==(b-a) && ((e<c && f<d && a<e && b<f)||(c<e && d<f && a>e && b>f)||(e<c && f<d && c<a && d<b)||(e>c && f>d && c>a && d>b))) || ((e+f)==(c+d) && (a+b)==(e+f) && ((c>e && d<f && a<e && b>f)||(c<e &&d>f && a>e && b<f)||(e<c && d<f && c<a && d>b)|| (c<e && d>f && a<c && b>d))))
{
    return 1;
}
return 2;
    
    }
};