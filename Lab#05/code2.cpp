#include <iostream> 
using namespace std;
const int MAX = 1000;
int main() {
char input[MAX];
char words[MAX][MAX]; int wordLengths[MAX];

// Taking input
cout<< "Enter a string (end input with Enter): "; 
cin.getline(input, MAX);

int wordCount = 0; int index = 0;
for (int i = 0; input[i] != '\0'; i++) { if (input[i] != ' ') {
words[wordCount][index++] = input[i]; }else{
if(index>0){ wordLengths[wordCount] = index; words[wordCount][index] = '\0'; wordCount++;
index = 0;
} }
}
if(index>0){ wordLengths[wordCount] = index; words[wordCount][index] = '\0'; wordCount++;
}
char result[MAX]; int resultIndex = 0;
for (int j = 0; j < wordCount; j++) {
for (int k = 0; k < wordLengths[j]; k++) {
result[resultIndex++] = words[j][k];
} if(j<wordCount-1){
result[resultIndex++] = ' '; }
}
result[resultIndex] = '\0';
cout << "Concatenated Result: " << result << endl;
return 0; }