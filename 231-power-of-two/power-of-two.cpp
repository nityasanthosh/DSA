class Solution {
public:
    bool isPowerOfTwo(int n) {

        // for(int i =0; i<=30; i++){
        //     if(n==(pow(2,i))){
        //         return true;
        //     }
        // }return false;

        int ans = 1;

        for(int i=0; i<=30; i++){
            if(n==ans){
                return true;
            }

            if(ans<INT_MAX/2){

            ans = ans * 2;
            }

        }return false;

        
    }
};