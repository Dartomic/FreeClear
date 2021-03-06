/*
Most of these methods are in the process of being converted from C# code
to C code equivalents.

This is the first C language project that I have undertaken of this size, 
so this conversion is going to take me a little longer than I would like,
but I still expect it to be completed soon.

Most of these methods are going to have their contents replaced with 
pseudocode. Some of the methods are going to be replaced immediately with C 
code. 

A few of the method's contents are going to remain commented out until different systems
are in place to replace their purpose.
*/


#include "Models/globals.h"
#include "methods.h"
#include <time.h>



// Get the date of the start of the study session
void GetTheDate(void)
{
    // // Get the current date
    // DateTime today = DateTime.Now;

    // /* Store the current date in the global variable 
    //     to be used for the rest of the program
    // */
    // globals.TheDate = today.ToString("d");
}
void GetPath(void)
{
    /* 
    This function originally allowed the user to select which OS is being used.
    But this decision is now going to be made at compile time for the target OS.
    
    This method gave a choice of selecting Linux(), or Windows().
    I am leaving this here for 
   */
}
void Linux(void)
{
    // var userName = Environment.UserName;
    // string pathString = ($"//home//{userName}//Documents//GlideCLI");
    // if (!Directory.Exists(pathString))
    // {
    //     Directory.CreateDirectory(pathString);
    // }
    // globals.DirectoryPath = pathString;
    // globals.osSwitch = true;
}
void Windows(void)
{
    // string directory = (@"\GlideCLI");
    // string pathString = Convert.ToString(Environment.GetFolderPath(Environment.SpecialFolder.MyDocuments) + directory);
    // string usablePath = pathString.Replace(@"\", @"\\");
    
    // if (!Directory.Exists(usablePath))
    // {
    //     Directory.CreateDirectory(usablePath);
    // }

    // globals.DirectoryPath = usablePath;

    // globals.osSwitch = false;
}
void StartUp(void)
{
    CheckForCountFile(); // Check for file that holds number of courses
    MainMenu();
}
void CheckForCountFile(void)
{
    const char ZERO_CHAR = '0';
    // string filename;
    // string path;
    // string courseCount;
    // if (globals.osSwitch == true)
    // {
    //     filename = "//CourseCount.txt";
    // }
    // else
    // {
    //     filename = "\\CourseCount.txt";
    // }
    // path = $"{globals.DirectoryPath}{filename}";
    // try
    // {
    //     courseCount = File.ReadAllText(path);
    //     globals.CourseCount = Convert.ToInt32(courseCount);
    // }
    // catch
    // {
    //     File.WriteAllText(path, ZERO_CHAR);
    //     courseCount = File.ReadAllText(path);
    //     globals.CourseCount = Convert.ToInt32(courseCount);
    // }
}
void MainMenu(void)
{
    // if (globals.CourseCount > ZERO)
    // {
    //     ReadyMenu();
    // }
    // else
    // {
    //     ZeroMenu();
    // }
}
void ZeroMenu(void)
{
    int selectionInt;
    // string selection;
    // bool madeSelect = false;
    // Console.WriteLine("\n\n1: Exit the program");
    // Console.WriteLine("2: Create a new course\n");
    // Console.WriteLine("\n\n\nEnter an option from the menu: ");
    // selection = Console.ReadLine();
    // selectionInt = Convert.ToInt32(selection);

    // while (madeSelect == false)
    // {
    //     switch (selectionInt)
    //     {
    //         case 1:
    //             Console.Clear();
    //             Console.WriteLine("Good Bye");
    //             madeSelect = true;
    //             Environment.Exit(ZERO);
    //             break;
    //         case 2:
    //             Console.Clear();
    //             Console.WriteLine("Create new course selected.\n");
    //             CreateCourse();
    //             madeSelect = true;
    //             break;
    //         default:
    //             Console.WriteLine("Default case");
    //             madeSelect = false;
    //             break;
    //     }
    // }
    // Console.WriteLine("This message is displayed so the program can exit, without \nlooking like it crashed. Press any key to close the program.");
    // Console.ReadLine();
    // Environment.Exit(ZERO);
}
void ReadyMenu(void)
{
    int selection;
    // string selectionString;
    // bool madeSelect = false;
    // Console.WriteLine("\n\n1: Exit the program");
    // Console.WriteLine("2: Create a new course");
    // Console.WriteLine("3: Study a course\n"); 
    // // Console.WriteLine("4: Remove a Course\n"); // Does not delete file, just removes it from the program
    // Console.WriteLine("\n\n\nSelect an option from the menu: ");
    // selectionString = Console.ReadLine();
    // selection = Convert.ToInt32(selectionString);

    // while (madeSelect == false)
    // {
    //     switch (selection)
    //     {
    //         case 1:
    //             Console.Clear();
    //             Console.WriteLine("Good Bye");
    //             madeSelect = true;
    //             Environment.Exit(ZERO);
    //             break;
    //         case 2:
    //             Console.Clear();
    //             Console.WriteLine("Create new course selected.\n");
    //             CreateCourse();
    //             madeSelect = true;
    //             break;
    //         case 3:
    //             Console.Clear();
    //             Console.WriteLine("Study a course selected.\n");
    //             SelectCourse();
    //             StudyCourse();
    //             madeSelect = true;
    //             break;
    //         //case 4:
    //         //    Console.WriteLine("Study a course selected.\n");
    //         //    RemoveCourse();
    //         //    madeSelect = true;
    //         //    break;
    //         default:
    //             Console.WriteLine("Default case");
    //             madeSelect = false;
    //             break;
    //     }
    // }
    // Console.WriteLine("This message is displayed so the progra can exit, without \nlooking like it crashed. Press any key to close the program.");
    // Console.ReadLine();
    // Environment.Exit(ZERO);
}
void CreateCourse(void)
{
    /* TODO: divide this function into smaller functions that are called here */


    // increment the course count after the course file containing the topic names
    // is created AND/OR updated.
    const double ZERO_DOUBLE = 0;
    const char ZERO_STRING = '0';
    int chapterLoop = ZERO;
    int chaptersInt = ZERO;
    int topicCounter = ZERO;
    char topicCountString;
    int topicLoop = ZERO;
    int subSectionCounter = ZERO;
    char subSectionString;
    int subLoop = ZERO;
    int topicID = ZERO;



    chapterLoop = ZERO;
    chaptersInt = ZERO;
    topicCounter = ZERO;
    topicCountString = ZERO_STRING;
    topicLoop = ZERO;
    subSectionCounter = ZERO;
    subSectionString = ZERO_STRING;
    subLoop = ZERO;
    // string filePath;
    // globals.TopicCount = ZERO;
    topicID = ZERO;

    printf("\n\n\n\n\nWhat is the name of the course? ");
    // globals.CourseName = Console.ReadLine();
    printf("\n\n\n\n\nHow many chapters are in the text book? ");
    // globals.CourseChapters = Console.ReadLine();

    // chaptersInt = Convert.ToInt32(globals.CourseChapters);
    // while (chapterLoop < chaptersInt)
    // {
    //     int currentChapter = chapterLoop + ONE;
    //     Console.WriteLine($"\n\n\n\n\nHow many sub-sections are in chapter {currentChapter}: "); // Chapters are used here to make it easier to set the course up.
    //     subSectionString = Console.ReadLine();
    //     subSectionCounter = Convert.ToInt32(subSectionString);
        

    //     while (subLoop < subSectionCounter)
    //     {
    //         int currentSubSection = subLoop + ONE;
    //         Console.WriteLine($"\n\n\n\n\nHow many topics are in section {currentChapter}.{currentSubSection}: "); // Chapters are used here to make it easier to set the course up.
    //         topicCountString = Console.ReadLine();
    //         topicCounter = Convert.ToInt32(topicCountString);
    //         globals.TopicCount = globals.TopicCount + topicCounter;

    //         while (topicLoop < topicCounter)
    //         {
    //             // This loop is where all of the essential data are set up
    //             TopicModel newTopic = new TopicModel();
    //             if (topicLoop == ZERO)
    //             {
    //                 newTopic.Top_ID = ZERO;
    //             }
    //             double problemCount = ZERO;
    //             string pCountString;
    //             int currentTopic = topicLoop + ONE;
    //             int check = ZERO; // will be used to see if Top_ID should increment.
    //             string topicString = Convert.ToString(currentTopic);
    //             newTopic.Top_Name = ($"{currentChapter}.{currentSubSection}.{topicString}");
    //             const string NONE = "none";

    //             Console.WriteLine($"\n\n\n\n\nEnter the quantity of questions for section {newTopic.Top_Name}: ");
    //             pCountString = Console.ReadLine();
    //             problemCount = Convert.ToDouble(pCountString);

    //             // Top_ID is initialized to zero at start of method, and incremented later in this loop. // int
    //             newTopic.Course_ID = globals.CourseCount + ONE; // int
    //             // Top_Name was set already // string
    //             newTopic.Top_Studied = false; // bool

    //             newTopic.Next_Date = NONE; // string
    //             newTopic.First_Date = NONE; // string

    //             newTopic.Num_Problems = problemCount; // the rest are type double
    //             newTopic.Num_Correct = ZERO_DOUBLE;
    //             newTopic.Top_Difficulty = ZERO_DOUBLE;
    //             newTopic.Top_Repetition = ZERO_DOUBLE;
    //             newTopic.Interval_Remaining = ZERO_DOUBLE;
    //             newTopic.Interval_Length = ZERO_DOUBLE;
    //             newTopic.Engram_Stability = ZERO_DOUBLE;
    //             newTopic.Engram_Retrievability = ZERO_DOUBLE;

    //             topics.Add(newTopic);
    //             topicLoop = topicLoop + ONE;
    //             check = topicLoop;
    //             if (check <= topicCounter)
    //             {
    //                 // Top_ID must be incremented before next iteration of loop, if more topics exist.
    //                 topicID = topicID + ONE;
    //                 newTopic.Top_ID = topicID;
    //             }
    //         }
    //         topicCounter = ZERO;
    //         topicLoop = ZERO;
    //         subLoop = subLoop + ONE;
    //     }
    //     subSectionCounter = ZERO;
    //     subLoop = ZERO;                
    //     chapterLoop = chapterLoop + ONE;
    // }
    // List<string> output = new List<string>();
    // foreach (var topic in topics)
    // {
    //     output.Add($"{topic.Top_ID},{topic.Course_ID},{topic.Top_Name},{topic.Top_Studied},{topic.Next_Date},{topic.First_Date},{topic.Num_Problems},{topic.Num_Correct},{topic.Top_Difficulty},{topic.Top_Repetition},{topic.Interval_Remaining},{topic.Interval_Length},{topic.Engram_Stability},{topic.Engram_Retrievability}");
    // }
    // Console.WriteLine("\n\n\n\n\nWriting data to text file.");
    // if (globals.osSwitch == true)
    // {
    //     // For Linux
    //     filePath = $"{globals.DirectoryPath}//{globals.CourseName}.txt";
    //     File.WriteAllLines(filePath, output);
    // }
    // else
    // {
    //     // For Windows
    //     filePath = $"{globals.DirectoryPath}\\{globals.CourseName}.txt";
    //     File.WriteAllLines(filePath, output);
    // }

    // string listFile;
    // if (globals.osSwitch == true)
    // {
    //     // For Linux
    //     listFile = $"{globals.DirectoryPath}//CourseList.txt";
    // }
    // else
    // {
    //     // For Windows
    //     listFile = $"{globals.DirectoryPath}\\CourseList.txt";
    // }
    // int newID = globals.CourseCount + ONE;
    // List<string> contentList = new List<string>();
    // string listContents = $"{newID},{globals.CourseName}.txt,{filePath}";
    // contentList.Add(listContents);
    // if (File.Exists(listFile))
    // {
    //     AddCourseToList();
    // }
    // else
    // {
    //     File.WriteAllLines(listFile, contentList);
    // }

    // Console.WriteLine("\n\n\n\n\nFinished writing data to text file.");
    // Console.WriteLine("Updating CourseCount.txt");
    // globals.CourseCount = globals.CourseCount + ONE;
    // string path;
    // string courseCount;
    // if (globals.osSwitch == true)
    // {
    //     path = $"{globals.DirectoryPath}//CourseCount.txt";
    // }
    // else
    // {
    //     path = $"{globals.DirectoryPath}\\CourseCount.txt";
    // }
    // courseCount = File.ReadAllText(path);
    // globals.CourseCount = Convert.ToInt32(courseCount);
    // globals.CourseCount = globals.CourseCount + ONE;
    // courseCount = Convert.ToString(globals.CourseCount);
    // File.WriteAllText(path, courseCount); 
    // Console.WriteLine("Finished updating CourseCount.txt");
    // Console.ReadLine();
}
void AddCourseToList(void)
{
    // string filePath;
    // string filePath2;
    // string courseFilePath;

    // if (globals.osSwitch == true)
    // {
    //     // Linux
    //     filePath = $"{globals.DirectoryPath}//CourseList.txt";
    //     filePath2 = $"{globals.DirectoryPath}//CourseList.bak";
    //     courseFilePath = $"{globals.DirectoryPath}//{globals.CourseName}.txt";
    // }
    // else
    // {
    //     // Windows
    //     filePath = $"{globals.DirectoryPath}\\CourseList.txt";
    //     filePath2 = $"{globals.DirectoryPath}\\CourseList.bak";
    //     courseFilePath = $"{globals.DirectoryPath}\\{globals.CourseName}.txt";
    // }

    // int courseID = globals.CourseCount + ONE;
    // List<string> lines = new List<string>();
    // if (File.Exists(filePath))
    // {
    //     lines = File.ReadAllLines(filePath).ToList();
    // }            
    // lines.Add($"{courseID},{globals.CourseName}.txt,{courseFilePath}");

    // File.WriteAllLines(filePath2, lines); // Just in case the computer loses power, or freezes up. CourseList.bak would have to be manually renamed.
    // File.WriteAllLines(filePath, lines);
}
void SelectCourse(void)
{
    // string filePath;
    // string selectionString;
    // int selectionInt;
    // bool validInput = false;
    // if (globals.osSwitch == true)
    // {
    //     // Linux
    //     filePath = $"{globals.DirectoryPath}//CourseList.txt";
    // }
    // else
    // {
    //     // Windows
    //     filePath = $"{globals.DirectoryPath}\\CourseList.txt";
    // }
    // List<CourseListModel> completeList = new List<CourseListModel>();
    // List<string> lines = new List<string>();
    // lines = File.ReadAllLines(filePath).ToList();

    // Console.WriteLine("\n\n\n\n\nReading data.");
    // foreach (string line in lines)
    // {
    //     string[] entries = line.Split(',');
    //     CourseListModel newList = new CourseListModel();

    //     newList.Course_ID = Convert.ToInt32(entries[0]);
    //     newList.Course_Name = entries[1];
    //     newList.File_Path = entries[2];

    //     completeList.Add(newList);
    // }
    // foreach (var course in completeList)
    // {
    //     Console.WriteLine($"Course ID: {course.Course_ID} - Course Name: {course.Course_Name}");
    // }
    // while (validInput == false)
    // {
    //     Console.WriteLine("\n\nEnter the Course's ID number that you wish to study: ");
    //     selectionString = Console.ReadLine();
    //     selectionInt = Convert.ToInt32(selectionString);
    //     selectionInt = selectionInt - ONE;
    //     var testVar = selectionInt + ONE;
    //     try
    //     {
    //         globals.FilePath = completeList.ElementAt(selectionInt).File_Path;
    //         validInput = true;
    //         Console.Clear();
    //         foreach (var course in completeList)
    //         {
    //             Console.WriteLine($"Course ID: {course.Course_ID} - Course Name: {course.Course_Name}");
    //             if (testVar == course.Course_ID)
    //             {
    //                 globals.CourseName = course.Course_Name;
    //             }
    //         }
    //     }
    //     catch
    //     {
    //         Console.WriteLine("Invalid selection. Press any key to continue.");
    //         validInput = false;
    //     }
    // }            
}
void StudyCourse(void)
{
    /* TODO: divide this function into smaller functions that are called here */



    // /*Start of section from LoadTopicIDs*/
    // const string TRUE = "True";
    int index;
    
    // /*
    //     Take the date stored from program iniitialization.
    // */
    // DateTime today = DateTime.Parse(globals.TheDate);
    // DateTime topicDate;
    
    
    int dateCompare;
    // string dateAsString;
    // string filePath = globals.FilePath;
    // string topStudString;
    // List<string> lines = new List<string>();

    // lines = File.ReadAllLines(filePath).ToList();
    // Console.WriteLine("\n\n\n\n\nReading data.");
    // foreach (string line in lines)
    // {
    //     string[] entries = line.Split(',');
    //     TopicModel newList = new TopicModel();

    //     newList.Top_ID = Convert.ToInt32(entries[0]);
    //     newList.Course_ID = Convert.ToInt32(entries[1]);
    //     newList.Top_Name = entries[2];
    //     topStudString = entries[3];
    //     if (topStudString == TRUE)
    //     {
    //         newList.Top_Studied = true;
    //     }
    //     else
    //     {
    //         newList.Top_Studied = false;
    //     }
        

    //     newList.Next_Date = entries[4];
    //     newList.First_Date = entries[5];

    //     newList.Num_Problems = Convert.ToDouble(entries[6]);
    //     newList.Num_Correct = Convert.ToDouble(entries[7]);

    //     newList.Top_Difficulty = Convert.ToDouble(entries[8]);
    //     newList.Top_Repetition = Convert.ToDouble(entries[9]);
    //     newList.Interval_Remaining = Convert.ToDouble(entries[10]);

    //     newList.Interval_Length = Convert.ToDouble(entries[11]);
    //     newList.Engram_Stability = Convert.ToDouble(entries[12]);
    //     newList.Engram_Retrievability = Convert.ToDouble(entries[13]);

    //     TopicsList.Add(newList);
    // }
    // // Retry Studied TopicID's section (these are study sessions that were missed)
    // index = ZERO;
    // while (index < TopicsList.Count)
    // {
    //     if (TopicsList.ElementAt(index).Top_Studied == true)
    //     {
    //         dateAsString = TopicsList.ElementAt(index).Next_Date;
    //         topicDate = DateTime.Parse(dateAsString);
    //         dateCompare = DateTime.Compare(topicDate, today);

    //         if (dateCompare < ZERO)
    //         {                        
    //             ToStudy.Add(index);
    //         }
    //     }

    //     index = index + ONE;
    // }
    // // Studied TopicID's scheduled for today section
    // index = ZERO;
    // while (index < TopicsList.Count)
    // {
    //     if (TopicsList.ElementAt(index).Top_Studied == true)
    //     {
    //         dateAsString = TopicsList.ElementAt(index).Next_Date;
    //         topicDate = DateTime.Parse(dateAsString);
    //         dateCompare = DateTime.Compare(topicDate, today);

    //         if (dateCompare == ZERO)
    //         {
    //             ToStudy.Add(index);
    //         }
    //     }

    //     index = index + ONE;
    // }
    // // New Topic ID's section
    // index = ZERO;
    // while (index < TopicsList.Count)
    // {
    //     if (TopicsList.ElementAt(index).Top_Studied == false)
    //     {
    //         ToStudy.Add(index);
    //     }

    //     index = index + ONE;
    // }

    // globals.TopicID = ToStudy.ElementAt(ZERO);
    // globals.TopicIndex = ZERO;       
    // /*End of secton from LoadTopicIDs*/

    // int toStudyCount = ToStudy.Count;
    // string numCorrectString;
    // string topStudBool;
    // string todayDateString = today.ToString("d");
    // if (toStudyCount > ZERO)
    // {
    //     globals.ProblemsDone = false;
    // }
    // else
    // {
    //     globals.ProblemsDone = true;
    // }
    // while (globals.ProblemsDone != true)
    // {
        
    //     if (globals.TopicIndex < toStudyCount)
    //     {
    //         //Loop through this code, assigning values to it until the list of indexes runs out.
    //         //TopicsList.ElementAt(globals.TopicIndex).Num_Correct;

    //         Console.WriteLine($"Section: {TopicsList.ElementAt(globals.TopicID).Top_Name}");
    //         Console.WriteLine($"Number of questions/problems: {TopicsList.ElementAt(globals.TopicID).Num_Problems}");
    //         if (TopicsList.ElementAt(globals.TopicID).Top_Studied == true)
    //         {
    //             topStudBool = "true";
    //         }
    //         else
    //         {
    //             topStudBool = "false";
    //         }
    //         Console.WriteLine($"Previously Studied: {topStudBool}");
    //         if (TopicsList.ElementAt(globals.TopicID).Top_Studied == false)
    //         {
    //             Console.WriteLine("\n\n\nEnter the quantity you answered correctly: ");
    //             numCorrectString = Console.ReadLine();

    //             TopicsList.ElementAt(globals.TopicID).Num_Correct = Convert.ToDouble(numCorrectString);
    //             TopicsList.ElementAt(globals.TopicID).First_Date = todayDateString;
    //             Console.Clear();
    //         }
    //         else
    //         {
    //             Console.WriteLine("\n\n\nPress any key to study next section.");
    //             Console.ReadLine();
    //             Console.Clear();
    //         }

    //         // Call funtion to calculate topics from here.
    //         CalculateLearning();
    //         SaveProgress();

    //         globals.TopicIndex = globals.TopicIndex + ONE;
    //         if (globals.TopicIndex < toStudyCount)
    //         {
    //             globals.TopicID = ToStudy.ElementAt(globals.TopicIndex);
    //         }                    
    //     }
    //     else
    //     {
    //         globals.ProblemsDone = true;
    //     }
    // }
    // Console.WriteLine("\n\n\nNothing left to study for today. Check back tomorrow.");
    // Console.ReadLine();
    // Environment.Exit(ZERO);
}
void CalculateLearning(void)
{
    double ithRepetition;
    AddRepetition();

    // ithRepetition = TopicsList.ElementAt(globals.TopicID).Top_Repetition;
    if (ithRepetition == ONE)
    {
        TopicDifficulty();
    }

    IntervalTime();
    EngramStability();
    EngramRetrievability();
    ProcessDate();
}
void AddRepetition(void)
{
    double ithRepetition;
    // double ithRepetition = TopicsList.ElementAt(globals.TopicID).Top_Repetition;

    ithRepetition = ithRepetition + ONE;
    // TopicsList.ElementAt(globals.TopicID).Top_Repetition = ithRepetition;
}
void TopicDifficulty(void)
{
    /*
    Since intervalTime multiplies against difficulty, and difficulty is set only once
    then a topic could be scheduled every day for a long time if too close to 1.0, and too 
    far apart if above 2.5
    */

    const double LOW_DIFFICULTY = 2.5;
    const double HIGH_DIFFICULTY = 1.3;
    double rise;
    double totalProblems;
    double correctProblems;
    double run;
    double slope;
    double difficulty;


    rise = LOW_DIFFICULTY - HIGH_DIFFICULTY;
    // totalProblems = TopicsList.ElementAt(globals.TopicID).Num_Problems;
    // correctProblems = TopicsList.ElementAt(globals.TopicID).Num_Correct;
    run = totalProblems;
    // slope = rise / run;
    // difficulty = (slope * correctProblems) + HIGH_DIFFICULTY; // Slope-Intercept formula y = mx + b

    // TopicsList.ElementAt(globals.TopicID).Top_Difficulty = difficulty; // Write difficulty to student record file Difficulty column
}
void IntervalTime(void)
{
    const double ONE_DOUBLE = 1;
    const double SINGLE_DAY = 1440; // 1440 is the quatity in minutes of a day. I'm using minutes, instead of whole days, to be more precise.
    double difficulty;
    double ithRepetition;
    double intervalRemaining;
    double intervalLength;    
    
    // difficulty = TopicsList.ElementAt(globals.TopicID).Top_Difficulty;
    // ithRepetition = TopicsList.ElementAt(globals.TopicID).Top_Repetition;
    // intervalRemaining = TopicsList.ElementAt(globals.TopicID).Interval_Remaining;
    // intervalLength = TopicsList.ElementAt(globals.TopicID).Interval_Length;

    // //     Second repetition will occur the next day. 
    // //	   Although, the research document does not precisely
    // //	   state a time frame until the second repetition. The 
    // //	   values of the two variables may need to be changed, 
    // //	   if the spacing is too far apart.

    if (ithRepetition == ONE_DOUBLE)
    {
        // The researech document says that s == r @ 1st repetition
        intervalRemaining = SINGLE_DAY;
        intervalLength = SINGLE_DAY;
    }
    else
    {
        intervalLength = intervalLength * difficulty;
    }

    intervalRemaining = intervalLength;
    // TopicsList.ElementAt(globals.TopicID).Interval_Length = intervalLength; // Write intervalLength to student record Interval.
    // TopicsList.ElementAt(globals.TopicID).Interval_Remaining = intervalRemaining; // Write remainingTime to student record file RTime column

}
void EngramStability(void)
{
    const double KNOWLEDGE_LINK = -0.0512932943875506;
    const double NEGATIVE_ONE = -1;
    double intervalRemaining;
    double intervalLength;
    double stabilityOfEngram;

    // // remainingTime and intervalLength represent the variables r and s, respectively, from the research document.
    // double intervalRemaining = TopicsList.ElementAt(globals.TopicID).Interval_Remaining;
    // double intervalLength = TopicsList.ElementAt(globals.TopicID).Interval_Length;
    // double stabilityOfEngram;

    // stabilityOfEngram = (NEGATIVE_ONE * intervalLength) / KNOWLEDGE_LINK; // S = -s/ln(K), where K = 0.95, and the natural logarithm of K equals KNOWLEDGE_LINK.            
    // TopicsList.ElementAt(globals.TopicID).Engram_Stability = stabilityOfEngram; // Write Stability to student record file Stability column

}
void EngramRetrievability(void)
{
    const double NEGATIVE_ONE = -1;
    double intervalLength;
    double intervalRemaining;
    double stabilityOfEngram;
    double power;
    double retrievability;


//     intervalLength = TopicsList.ElementAt(globals.TopicID).Interval_Length;
//     intervalRemaining = TopicsList.ElementAt(globals.TopicID).Interval_Remaining;
//     stabilityOfEngram = TopicsList.ElementAt(globals.TopicID).Engram_Stability;
//     power = NEGATIVE_ONE * (intervalLength - intervalRemaining) / stabilityOfEngram;
//     retrievability = Math.Exp(power);

//     TopicsList.ElementAt(globals.TopicID).Engram_Retrievability = retrievability;
}
void ProcessDate(void)
{
    const double SINGLE_DAY = 1440;
    double intervalLength;
    double days;

    // intervalLength = TopicsList.ElementAt(globals.TopicID).Interval_Length;
    // days = Convert.ToInt32(intervalLength / SINGLE_DAY);
    // DateTime today = DateTime.Parse(globals.TheDate);
    // DateTime nextDate = today.AddDays(days);
    // string nextDateString = nextDate.ToString("d");
    
    // TopicsList.ElementAt(globals.TopicID).Next_Date = nextDateString;
    // if (TopicsList.ElementAt(globals.TopicID).Top_Studied == false)
    // {
    //     TopicsList.ElementAt(globals.TopicID).Top_Studied = true;
    // }
}
void SaveProgress(void)
{
    // string filePath;
    // string filePath2;
    // List<string> output = new List<string>();
    // foreach (var topic in TopicsList)
    // {
    //     output.Add($"{topic.Top_ID},{topic.Course_ID},{topic.Top_Name},{topic.Top_Studied},{topic.Next_Date},{topic.First_Date},{topic.Num_Problems},{topic.Num_Correct},{topic.Top_Difficulty},{topic.Top_Repetition},{topic.Interval_Remaining},{topic.Interval_Length},{topic.Engram_Stability},{topic.Engram_Retrievability}");
    // }
    // Console.WriteLine("\n\n\n\n\nSaving Work.");
    // if (globals.osSwitch == true)
    // {
    //     // For Linux
    //     filePath2 = $"{globals.DirectoryPath}//{globals.CourseName}.bak";
    //     filePath = $"{globals.DirectoryPath}//{globals.CourseName}";
    //     File.WriteAllLines(filePath2, output);
    //     File.WriteAllLines(filePath, output);
    // }
    // else
    // {
    //     // For Windows
    //     filePath2 = $"{globals.DirectoryPath}\\{globals.CourseName}.bak";
    //     filePath = $"{globals.DirectoryPath}\\{globals.CourseName}";
    //     File.WriteAllLines(filePath2, output);
    //     File.WriteAllLines(filePath, output);
    // }

    printf("\nWork Saved.\n");
    // Console.ReadLine();
}