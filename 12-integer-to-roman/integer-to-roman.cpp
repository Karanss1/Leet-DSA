class Solution {
public:
    string intToRoman(int num) {


    vector<pair<int, string>> valueSymbols{
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };

    string res = "";

    for (auto &[value, symbol] : valueSymbols) {
        int count = num / value;   
        num %= value;              // remaining number
        for (int i = 0; i < count; i++)
            res += symbol;
    }

    return res;
}
    };