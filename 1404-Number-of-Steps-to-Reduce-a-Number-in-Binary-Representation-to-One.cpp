class Solution {
public:
    
int numSteps(string s) {
    int steps = 0;
    int carry = 0;
    
    // Start from the least significant bit
    for (int i = s.length() - 1; i > 0; i--) {
        // If the bit is '0', we divide by 2
        if (s[i] == '0') {
            // If there's a carry, we add 1 before dividing by 2
            if (carry == 1) {
                steps += 2; // One step for adding 1 and one for dividing
            } else {
                steps += 1; // One step for just dividing
            }
        } else { // If the bit is '1', we add 1
            // If there's a carry, we just add 1
            if (carry == 1) {
                steps += 1; // One step for just adding
            } else {
                steps += 2; // One step for just adding and one for dividing
            }
            carry = 1; // Set carry for next iteration
        }
    }
    
    // If there's a carry at the end, we add 1 step
    if (carry == 1) {
        steps += 1;
    }
    
    return steps;
}
};