#include <iostream>
#include <string>
#include <cmath>

using namespace std;


string ones[] = { "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
                  "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
                  "seventeen", "eighteen", "nineteen" };

string tens[] = { "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };


string convertHundreds(int num) {
    string result = "";
    
    if (num >= 100) {
        result += ones[num / 100] + " hundred";
        num %= 100;
        if (num > 0) result += " ";
    }
    
    if (num >= 20) {
        result += tens[num / 10];
        num %= 10;
        if (num > 0) result += "-";
    }
    
    if (num > 0) {
        result += ones[num];
    }
    
    return result;
}


string numberToWords(int num) {
    if (num == 0) return "zero";
    
    string result = "";
    
    if (num < 0) {
        result += "negative ";
        num = -num;
    }
    
    int billion = num / 1000000000;
    int million = (num / 1000000) % 1000;
    int thousand = (num / 1000) % 1000;
    int remainder = num % 1000;
    
    if (billion > 0) result += convertHundreds(billion) + " billion ";
    if (million > 0) result += convertHundreds(million) + " million ";
    if (thousand > 0) result += convertHundreds(thousand) + " thousand ";
    if (remainder > 0) result += convertHundreds(remainder);
    

    while (result.back() == ' ') result.pop_back();
    
    return result;
}

int main() {
    int number;
    cin >> number;
    cout << numberToWords(number) << endl;
    return 0;
}