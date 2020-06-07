//https://leetcode.com/contest/weekly-contest-192/problems/design-browser-history/
class BrowserHistory {
public:
    string home;
    string history[1000];
    int curr, next;
    int count;
    BrowserHistory(string homepage)
    {
        home = homepage;
        history[0] = home;
        curr = 0;
        next = 1;
        count = 1;
    }

    void visit(string url)
    {
        count++;
        next = curr + 1;
        history[next] = url;
        curr++;
        next++;
        cout << count;
        for (int i = 0; i < next; i++)
            cout << history[i] << ' ';
        cout << next << curr << endl;
    }

    string back(int steps)
    {
        count++;
        cout << steps << endl;
        if (steps > curr)
        {
            curr = 0;
            return home;
        }
        curr = curr - steps;
        return history[curr];
    }

    string forward(int steps)
    {
        count++;
        int max = next - 1 - curr;
        if (max < steps)
        {
            curr = next - 1;
            return history[curr];
        }
        curr = curr + steps;
        return history[curr];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */