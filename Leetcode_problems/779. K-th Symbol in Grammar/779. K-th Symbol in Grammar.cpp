class Solution {
public:
    int kthGrammar(int n, int k) { 
        bool same=true; 

        n=pow(2,n-1); //obtenemos el numero de bits 
        while(n!=1){ 
            n/=2; //dividimos el numero de bits entre 2
            if(k>n){ //si el numero a buscar es mayor que el numero de bits
                k-=n; //restamos el numero de bits a k y modificamos el valor de same
                same=!same; 
            }
        }
        return ((same) ? 0:1); //si same es true, regresa 0, si no, regresa 1
    }
};