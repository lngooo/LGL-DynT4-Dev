void helper(int num, char* res) {
    if (num == 0) return;
    if (num >= 1000) { strcat(res, "M"); helper(num - 1000, res); }
    else if (num >= 900) { strcat(res, "CM"); helper(num - 900, res); }
    else if (num >= 500) { strcat(res, "D"); helper(num - 500, res); }
    else if (num >= 400) { strcat(res, "CD"); helper(num - 400, res); }
    else if (num >= 100) { strcat(res, "C"); helper(num - 100, res); }
    else if (num >= 90) { strcat(res, "XC"); helper(num - 90, res); }
    else if (num >= 50) { strcat(res, "L"); helper(num - 50, res); }
    else if (num >= 40) { strcat(res, "XL"); helper(num - 40, res); }
    else if (num >= 10) { strcat(res, "X"); helper(num - 10, res); }
    else if (num >= 9) { strcat(res, "IX"); helper(num - 9, res); }
    else if (num >= 5) { strcat(res, "V"); helper(num - 5, res); }
    else if (num >= 4) { strcat(res, "IV"); helper(num - 4, res); }
    else { strcat(res, "I"); helper(num - 1, res); }
}

void IntToRoman(int num, char* res) {
    res[0] = '\0';
    helper(num, res);
}