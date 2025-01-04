class Solution {
public:
    bool winnerOfGame(string colors) {
        int n=colors.size();
        if(n<2)
        return false;
        int Bob_chance=0,Alice_chance=0;
        for(int i=1;i<n;i++)
        {
            if(colors[i]==colors[i-1] && colors[i]==colors[i+1])
            {
                if(colors[i]=='A')
                 Alice_chance++;
                else 
                Bob_chance++;
            }

        }
        if(Alice_chance>Bob_chance)
        return true;
        return false;
    }
};
