class Solution
{
    public:
        int ladderLength(string start, string end, vector<string> &word)
        {
            queue<pair<string, int>> q;
            q.push({ start,
                1 });

            unordered_set<string> st(word.begin(), word.end());
            st.erase(start);

            while (!q.empty())
            {
                string w = q.front().first;
                int steps = q.front().second;
                q.pop();

                if (w == end)
                    return steps;

                for (int i = 0; i < w.size(); i++)
                {
                    char orignal = w[i];

                    for (char ch = 'a'; ch <= 'z'; ch++)
                    {
                        w[i] = ch;

                        if (st.find(w) != st.end())
                        {
                            st.erase(w);
                            q.push({ w,
                                steps + 1 });
                        }
                    }
                    w[i] = orignal;
                }
            }
            return 0;
        }
};