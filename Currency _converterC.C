 
139
140
141
142
143
144
145
146
147
148
149
150
151
152
153
154
155
156
157
158
159
160
161
162
163
164
165
166
167
168
169
170
171
172
173
174
175
176
177
178
179
180
181
182
⌄
⌄
⌄
⌄
⌄
⌄

            addHistory(currencies[fromIndex].code, currencies[toIndex].code, amount, result);
        }

        else if(choice == 2) {
            if(historyCount == 0) {
                printf("\n❌ No previous conversion found!\n");
                continue;
            }

            // Get last history
            struct History last = history[historyCount-1];

            double revResult = last.result * (1); // Reverse using basic concept

            printf("\n🔁 REVERSING LAST CONVERSION...\n");
            printf("✨ RESULT: %.2lf %s = %.2lf %s\n",
                last.result, last.to,
                last.amount, last.from
            );

            addHistory(last.to, last.from, last.result, last.amount);
        }

        else if(choice == 3) {
            viewHistory();
        }

        else if(choice == 4) {
            clearHistory();
        }

        else if(choice == 5) {
            printf("\n🚪 Exiting... Thank you for using the converter! 🌟\n");
            break;
        }

        else {
            printf("\n❌ Invalid choice! Try again.\n");
        }
    }

    return 0;
}
Output



Dark mode

Full screen

Restore code

Download

Contact us


==================================================
         💱 ADVANCED CURRENCY CONVERTER 💱
==================================================
1. Convert Currency 🌐
2. Reverse Last Conversion 🔁
3. View History 📜
4. Clear History 🧹
5. Exit 🚪
--------------------------------------------------
Enter your choice: 
A new version is available.

Reload
×