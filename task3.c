#include <stdio.h>

int main() {
    // Questions
    char *questions[] = {
        "What is the capital of India?",
        "Which language is used for system programming?",
        "Who is known as the father of computers?",
        "Which planet is known as the Red Planet?"
    };

    // Options
    char *options[][4] = {
        {"Mumbai", "New Delhi", "Kolkata", "Chennai"},
        {"Python", "Java", "C", "HTML"},
        {"Charles Babbage", "Alan Turing", "Dennis Ritchie", "Bill Gates"},
        {"Earth", "Mars", "Jupiter", "Venus"}
    };

    // Correct answers (indexing from 1)
    int correctAnswers[] = {2, 3, 1, 2};

    int totalQuestions = sizeof(correctAnswers) / sizeof(correctAnswers[0]);
    int score = 0, answer;

    printf("===== Welcome to the Quiz Game =====\n\n");

    for (int i = 0; i < totalQuestions; i++) {
        printf("%d) %s\n", i + 1, questions[i]);

        for (int j = 0; j < 4; j++) {
            printf("   %d. %s\n", j + 1, options[i][j]);
        }

        printf("Enter your choice (1-4): ");
        scanf("%d", &answer);

        if (answer == correctAnswers[i]) {
            printf("Correct!\n\n");
            score++;
        } else if (answer != correctAnswers[i]&& answer>5) {
            printf("Wrong! Correct answer is: %s\n\n", options[i][correctAnswers[i] - 1]);
        }
        else
        printf ("invalid choice entered\n");
    }

    printf("===== Quiz Over =====\n");
    printf("Your Final Score: %d out of %d\n", score, totalQuestions);

    return 0;
}
