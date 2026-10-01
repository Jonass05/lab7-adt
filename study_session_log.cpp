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
    static const int CAPACITY = 4;
    int sessionMinutes[CAPACITY];
    int count;

public:
    // TODO (Part D): Write a constructor that creates an empty log.
    StudySessionLog()
    {
        count = 0;
    }

    // TODO (Part D): Write addSession. It receives minutes and reports whether the session was stored.
    bool addSession(int minutes)
    {
        if (count == CAPACITY)
        {
            return false;
        }
        sessionMinutes[count] = minutes;
        count++;
        return true;
    }

    // TODO (Part D): Write totalMinutes as a const member function.
    int totalMinutes() const
    {
        int total = 0;
        for (int i = 0; i < count; i++)
        {
            total += sessionMinutes[i];
        }
        return total;
    }

    // TODO (Part D): Write longestSession as a const member function.
    int longestSession() const
    {
        if (count == 0)
        {
            return 0;
        }
        int max = sessionMinutes[0];
        for (int i = 1; i < count; i++)
        {
            if (sessionMinutes[i] > max)
            {
                max = sessionMinutes[i];
            }
        }
        return max;
    }

    // TODO (Part D): Write size as a const member function.
    int size() const
    {
        return count;
    }

    // TODO (Part D): Write isEmpty as a const member function.
    bool isEmpty() const
    {
        return count == 0;
    }
};

int main()
{
    // ===== Resolve these TODOs later (Part E) =====
    cout << boolalpha;
    // TODO (Part E): Create a StudySessionLog object and print whether it starts empty.
    StudySessionLog log;
    cout << "Log is empty: " << log.isEmpty() << endl;

    // TODO (Part E): Add four dummy session durations and attempt to add a fifth.
    log.addSession(50);
    log.addSession(45);
    log.addSession(30);
    log.addSession(90);
    log.addSession(75); // This should fail.

    // TODO (Part E): Print the number of stored sessions and whether the fifth session was accepted.
    cout << "Number of stored sessions: " << log.size() << endl;
    cout << "Fifth session accepted: " << log.addSession(75) << endl;

    // TODO (Part E): Print the total minutes and the longest stored session.
    cout << "Total minutes: " << log.totalMinutes() << endl;
    cout << "Longest session: " << log.longestSession() << endl;

    return 0;
}