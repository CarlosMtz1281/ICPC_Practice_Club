// 202. Happy Number -Easy

class Solution {
public:
    bool isHappy(int n) {
        unordered_set <int> set;

        int  s = 0;
        int  t = 0;
        string ns;

        while (true){
            s = 0;
            ns = to_string(n);

           for (int i = 0; i < ns.length(); i++){
               t = n%10;
               s+=pow(t,2);
               n= floor(n/10);

           }
            n = s;

          // if n == 1 then we reached the end
           if (n == 1){return true;}
           // if n isnt stored yet store it
           if (set.find(n) == set.end()){
               set.insert(n);
         // if n is repeted then is looping and return false
           }else {return false;}

        }
    }
};
