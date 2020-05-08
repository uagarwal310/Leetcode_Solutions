class Solution 
{
    public:
        vector<vector<int>>& case1(vector<vector<int>> n)
        {
            vector<vector<int>>* s;
            vector<int> prev=n[0];
            vector <int> next=n[1];
            if(prev[0]==next[0]-1)
            {
                prev=next;
                next[0]=next[0]+1;
                s.push_back(prev);
                s.push_back(next);
                return s;
            }
            else if(prev[0]==next[0]+1)
            {
                prev=next;
                next[0]=next[0]-1;
                s.push_back(prev);
                s.push_back(next);
                return s;
            }
            s.push_back(next);
            return s;
        }
        vector<vector<int>>& case2(vector<vector<int>> n)
        {
            vector<vector<int >>* s;
            vector<int> prev=n[0];
            vector <int> next=n[1];
            if(prev[1]==next[1]-1)
            {
                prev=next;
                next[1]=next[1]+1;
                s.push_back(prev);
                s.push_back(next);
                return s;
            }
            else if(prev[1]==next[1]+1)
            {
                prev=next;
                next[1]=next[1]-1;
                s.push_back(prev);
                s.push_back(next);
                return s;
            }
            s.push_back(next);
            return s;
        }
        vector<vector<int>>& case3(vector<vector<int>> n)
        {
            vector<vector<int >>* s;
            vector<int> prev=n[0];
            vector <int> next=n[1];
            if(prev[0]==next[0]-1)
            {
                prev=next;
                next[1]=next[1]+1;
                s.push_back(prev);
                s.push_back(next);
                return s;
            }
            else if(prev[1]+1==next[1])
            {
                prev=next;
                next[0]=next[0]-1;
                s.push_back(prev);
                s.push_back(next);
                return s;
            }
            s.push_back(next);
            return s;
        }
        vector<vector<int>>& case4(vector<vector<int>> n)
        {
            vector<vector<int >>* s;
            vector<int> prev=n[0];
            vector <int> next=n[1];
            if(prev[0]==next[0]+1)
            {
                prev=next;
                next[1]=next[1]+1;
                s.push_back(prev);
                s.push_back(next);
                return s;
            }
            else if(prev[1]-1==next[1])
            {
                prev=next;
                next[0]=next[0]+1;
                s.push_back(prev);
                s.push_back(next);
                return s;
            }
            s.push_back(next);
            return s;
        }
        vector<vector<int>>& case5(vector<vector<int>> n)
        {
            vector<vector<int>>* s;
            vector<int> prev=n[0];
            vector <int> next=n[1];
            if(prev[0]==next[0]-1)
            {
                prev=next;
                next[1]=next[1]-1;
                s.push_back(prev);
                s.push_back(next);
                return s;
            }
            else if(prev[1]+1==next[1])
            {
                prev=next;
                next[0]=next[0]-1;
                s.push_back(prev);
                s.push_back(next);
                return s;
            }
            s.push_back(next);
            return s;
        }
        vector<vector<int>>& case6(vector<vector<int>> n)
        {
            vector<vector<int >> *s;
            vector<int> prev=n[0];
            vector <int> next=n[1];
            if(prev[0]==next[0]+1)
            {
                prev=next;
                next[1]=next[1]-1;
                s.push_back(prev);
                s.push_back(next);
                return s;
            }
            else if(prev[1]+1==next[1])
            {
                prev=next;
                next[0]=next[0]+1;
                s.push_back(prev);
                s.push_back(next);
                return s;
            }
            s.push_back(next);
            return s;
        }
        bool hasValidPath(vector<vector<int>>& grid) 
        {
            vector<vector<int>> *a;
            vector<int> prev;
            vector<int> next;
            prev.push_back(0);
            prev.push_back(0);
            int n=grid[0][0];
            if(n==1|| n==6)
            {
                next.push_back(0);
                next.push_back(1);
            }
            else if(n==2 || n==3)
            {
                next.push_back(1);
                next.push_back(0);
            }
            else 
                return false;
            a.push_back(prev);
            a.push_back(next);
            int x1=a.size()-1;
            int y1=a[0].size()-1;
            while(true)
            {
                prev=a[0];
                next=a[1];
                int x=next[0];
                int y=next[1];
                int q=grid[x][y];
                if(q==1)
                    a=case1(a);
                else if(q==2)
                    a=case2(a);
                else if(q==3)
                    a=case3(a);
                else if(q==4)
                    a=case4(a);            
                else if(q==5)
                    a=case5(a);            
                else if(q==6)
                    a=case6(a);
                if(a.size()==0)
                    return false;
                if(a.size==1)
                {
                    prev=a[0];
                    if(prev[0]==x1 && prev[1]==y1)
                        return true;
                    else 
                        return false;
                }
                prev=a[0];
                next=a[1];
                if(prev[0]==x1 && prev[1]==y1)
                    return true;
                if(next[0]=x1 && next[1]==y1)
                    return true;
            }   
        }
};