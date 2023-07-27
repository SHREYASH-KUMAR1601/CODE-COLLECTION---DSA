// string removeOuterParentheses(string s)
// {
//     int empty_index = 0;
//     string ans;
//     stack<char> st;
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] == '(')
//         {
//             st.push(s[i]);
//         }
//         else if (!st.empty() and s[i] == ')')
//         {
//             if (st.top() == '(')
//             {
//                 st.pop();
//             }
//         }
//         else if (st.empty())
//         {
//             ans = ans + s.substr(empty_index + 1, i - empty_index - 1)
//                             empty_index = i + 1;
//         }
//     }
//     return ans;
// }
// }
// ;

//

//     string removeOuterParentheses(string s) {
//         int empty_index = 0;
//         string ans;
//         stack<char> st;

//         for (int i = 0; i < s.length(); i++) {
//             if (s[i] == '(') {
//                 st.push(s[i]);
//             } else if (s[i] == ')' && !st.empty()) {
//                 if (st.top() == '(') {
//                     st.pop();
//                 }
//             }

//             if (st.empty()) {
//                 ans += s.substr(empty_index + 1, i - empty_index - 1);
//                 empty_index = i + 1;
//             }
//         }

//         return ans;
//     }
// };
