// #include<iostream>
// #include<string>
// using namespace std;

// int main()
// {
//     string str = "This is a dummy string ";
//     char ch;
//     cout<<"Enter a character ";
//     cin>>ch;
//     int count = 0;
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] == ch)
//         {
//             count++;
//         }
        
//     }
//     cout<<"Frequency of "<<ch<<" is "<<count;
//     return 0;
    
// }

// int main()
// {
//     int count1 = 0;
//     int count2 = 0;
//     int count3 = 0;
//     string str = "This is a dummy string";
//     for (int i = 0; i < str.length() ; i++)
//     {
//         if (str[i] == 'a' || str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u')
//         {
//             count1++;
//         }
//         else if (str[i] == ' ')
//         {
//             count2++;
//         }
//         else{
//             count3++;
//         }
        
        
//     }
//     cout<<"Frequency of vowels in a string is: "<<count1<<endl;
//     cout<<"Frequency of white spaces in a string is: "<<count2<<endl;
//     cout<<"Frequency of consonants in a string is: "<<count3;

//     return 0;
    
    
// }

// int main()
// {
//     string str;
//     string str1 = "p2ro@gram84iz./";

//     for (int i = 0; i < str1.length(); i++)
//     {
//         char ch = str1[i];
//         if (isalpha(ch))
//         {
//             str = str + ch;
//         }
        
//     }
//     cout << endl <<"String after removing all non-alphabetic characters:" << str << endl;
//     return 0;
// }

// int main() {
    // char str[100]; // Assuming a maximum length of 100 characters
    // int length = 0;

    // cout << "Enter a string: ";
    // cin.getline(str, sizeof(str)); // Read a line of text

    // Calculate the length of the string
//     while (str[length] != '\0') {
//         length++;
//     }

//     cout << "Length of the string: " << length << std::endl;

//     return 0;
// }

// int main()
// {
//     string str , str1 , str2;
//     cout<<"Enter sting 1: ";
//     cin>>str;
//     cout<<"Enter sting 2: ";
//     cin>>str1;

//     str2 = str + ' ' + str1;

//     cout<<"Resultant string = "<<str2;


// }

// int main()
// {
//     string str;
//     cout<<"Enter any string: "<<endl;
//     cin>>str;
//     cout<<"String before operation: "<<str<<endl;
//     for (int i = 0; i < str.length(); i++)
//     {
//         char ch = str[i];
//         int n = int(ch);
//         if ((ch >= 'a' && ch < 'z') || (ch >= 'A' && ch <='Z'))
//         {
//             n++;
//             ch = char(n);
//             str[i] = ch;
//         }
//         else if (ch == 'z')
//         {
//             n = 97;
//             ch = char(n);
//             str[i] = ch;
//         }
//         else if (ch == 'Z')
//         {
//             n = 65;
//             ch = char(n);
//             str[i] = ch;
//         }
        
//     }
//     cout<<"String after operation: "<<str<<endl;
    
//     return 0;
// }

// int main()
// {
//     string str, str1;
//     cout<<"Enter any string: "<<endl;
//     cin>>str;
//     int size = str.length();
//     for (int i = size-1 ; i >= 0 ; i--)
//     {
//        char ch = str[i];
//        str1 = str1 + ch;
//     }
//     if (str == str1)
//     {
//         cout<<"Input string is palindrome!";
//     }
//     else{
//         cout<<"Input string is not palindrome!";
//     }
    
//     return 0;
// }

// int main()
// {
//     string str;
//     str = "Faizan Raza";
//     int count = 0;
//     for (int i = 0; i < str.length() ; i++)
//     {
//         if (str[i] == ' ')
//         {
//             count++;
//         }
        
//     }
//     cout<<"Number of words in a string is: "<<count+1;

//     return 0;
// }

// int main()
// {
//     string str;
//     str = "cpp exercise sheet";
//     cout<<"String before operation: "<<str<<endl;
//     str[0] = toupper(str[0]);
//     for (int i = 0; i < str.length() ; i++)
//     {
//         if (str[i] == ' ')
//         {
//             str[i+1] = toupper(str[i+1]);
//         }
        
//     }
//     cout<<"String after operation: "<<str;

//     return 0;
// }

// int main()
// {
//     string str;
    // cout<<"Enter the string: "<<endl;
    // cin>>str;
//     str = "C++ is a general purpose programming language";
//     string currentWord;
//     string largestWord;
//     char space = ' ';

//     for (char ch : str)
//     {
//         if (ch != space)
//         {
//             currentWord += ch;
//         }
//         else{
//             if (currentWord.length() > largestWord.length())
//             {
//                 largestWord = currentWord;
//             }
//             currentWord = "";
            
//         }
//     }

//     if (currentWord.length() > largestWord.length())
//     {
//         largestWord = currentWord;
//     }

//     if (!largestWord.empty())
//     {
//         cout<<"Largest word in a given string is: "<<largestWord<<endl;
//         cout<<"Its length is: "<<largestWord.length();
//     }
//     else{
//         cout<< "No words found";
//     }
    
//     return 0;
// }