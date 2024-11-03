#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int player1_cumulative_score = 0;
    int player2_cumulative_score = 0;
    int max_lead = 0;
    int winner = 0;

    for (int i = 0; i < n; i++) {
        int s, t;
        scanf("%d %d", &s, &t);
        
        
        player1_cumulative_score += s;
        player2_cumulative_score += t;
        
        
        int lead;
        int current_winner;
        if (player1_cumulative_score > player2_cumulative_score) {
            lead = player1_cumulative_score - player2_cumulative_score;
            current_winner = 1;
        } else {
            lead = player2_cumulative_score - player1_cumulative_score;
            current_winner = 2;
        }
        
        
        if (lead > max_lead) {
            max_lead = lead;
            winner = current_winner;
        }
    }
    
    
    printf("%d %d\n", winner, max_lead);   
}
