/* Probably going to use structs here to replace these parts */




// bool osSwitch; // True if Linux, false if Windows. This is needed to store files correctly, so this app can be used in both operating systems.
// string DirectoryPath;
// string DirectoryExists;
// string FilePath;
// bool FileExists;


// /* Course files variables */
// string CourseName;
// string CourseChapters;
// int CourseCount;
// int TopicCount;


// int TopicIndex; // Needed for course study session
// int TopicID;
// bool ProblemsDone;

// // Use this date, its from the start of the study session
// string TheDate;




/*From course list file */

// int Course_ID;
// string Course_Name;
// string File_Path;




/*from topic model file */

// int Top_ID;
// int Course_ID; // If more than one course, then it may be best to not start the TopicID at ZERO for the first topic, so that less of the program needs modifying to allow multiple courses.
// string Top_Name; // This is only used to make things easier for building a course. I can't think of why this would be needed, other than for that purpose.
// bool Top_Studied;

// string Next_Date;
// string First_Date;  // I might have a feature that displays the progress of topics since their first study dates.

// double Num_Problems;
// double Num_Correct;

// double Top_Difficulty;
// double Top_Repetition;
// double Interval_Remaining;

// double Interval_Length;
// double Engram_Stability;
// double Engram_Retrievability;
