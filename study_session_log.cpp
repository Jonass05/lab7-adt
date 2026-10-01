/*
 * Course: COEN 2220 - Programming 2
 * Name: [John P. Badillo Lamourt]
 * Lab: Lab 7 - Abstract Data Types
 * Description: ADT contract, implementation, and client code practice
 * Due date: [october 1, 2026]
 */

#include <iostream>
using namespace std;

/*
 * StudySessionLog ADT
 *
 * Data:
 * TODO (Part C): Describe the study session durations managed by this ADT.
 *  A sequence of up to four study session durations measured in minutes
 * 
 * Operations:
 * TODO (Part C): Describe addSession(minutes), including its result when the log cannot accept another session.
 * Adds one study session duration in minutes when space remains; returns true if added, or false if the log is full.
 * 
 * TODO (Part C): Describe totalMinutes().
 * Returns the total number of minutes across all stored study sessions.
 * 
 * TODO (Part C): Describe longestSession() and its precondition.
 * Returns the duration of the longest stored study session; requires at least one session to be stored.
 * 
 * TODO (Part C): Describe size() and isEmpty().
 * size(): Returns the number of stored study sessions. isEmpty(): Reports whether no study sessions have been recorded yet.
 * 
 */

class StudySessionLog
{
private:
    // ===== Resolve these TODOs later (Part D) =====

    // TODO (Part D): Add a fixed capacity constant of four study sessions.
    // TODO (Part D): Add an int array named sessionMinutes for the stored session durations.
    // TODO (Part D): Add an int that tracks how many study sessions are stored.

public:
    // TODO (Part D): Write a constructor that creates an empty log.
    // TODO (Part D): Write addSession. It receives minutes and reports whether the session was stored.
    // TODO (Part D): Write totalMinutes as a const member function.
    // TODO (Part D): Write longestSession as a const member function.
    // TODO (Part D): Write size as a const member function.
    // TODO (Part D): Write isEmpty as a const member function.
};

int main()
{
    // ===== Resolve these TODOs later (Part E) =====

    // TODO (Part E): Create a StudySessionLog object and print whether it starts empty.
    // TODO (Part E): Add four dummy session durations and attempt to add a fifth.
    // TODO (Part E): Print the number of stored sessions and whether the fifth session was accepted.
    // TODO (Part E): Print the total minutes and the longest stored session.
    // TODO (Part E): Print descriptive English labels for all results.

    return 0;
}