// C1
bool isPalindrome(const char* str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    for (int i = 0; i < len/2; i++) {
        if (str[i] != str[len-i-1]) {
            return false;
        }
    }
    return true;
}
//C2
bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

bool isSpecialNumber(int n) {
   int tmp=n;
    int sum = 0;
    while (tmp > 0) {
        sum += tmp % 10;
        tmp /= 10;
    }
    return isPrime(sum) && isPrime(n);
}
//C3
void encrypt(char* text, int shift) {
     for (int i = 0; text[i] != '\0'; i++) {
        if (isalpha(text[i])) {
            char base = isupper(text[i]) ? 'A' : 'a';
            text[i] = (text[i] - base + shift) % 26 + base;
        }
    }
}

void decrypt(char* text, int shift) {
  encrypt(text, 26 - shift);
}
//C4
bool checkElementsUniqueness(int* arr, int n) {
    bool seen[1001] = {false}; // Initialize all elements of seen to false
    
    for (int i = 0; i < n; i++) {
        if (seen[arr[i]]) {
            return false; // Element has already been seen before, so it's not unique
        } else {
            seen[arr[i]] = true; // Mark the element as seen
        }
    }
    
    return true; // All elements in the array are unique
}
//C5
long int decimalToBinary(int decimal_number) {
    if (decimal_number == 0) {
        return 0;
    } else {
        return (decimal_number % 2) + 10 * decimalToBinary(decimal_number / 2);
    }
}
int main()
{
    	
    const char* str = "abba";
    cout << isPalindrome(str)
}