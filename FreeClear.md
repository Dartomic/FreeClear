# About

While GlideCLI has been a great tool for me, it has become a prototype for what I consider "the real deal". I am writing FreeClear in the C language. It is based on GlideCLI's program's design. 

Here is GlideCLI if you want to look at it: https://github.com/Dartomic/GlideCLI


Last year I announced that I was doing this in my free time, but I put the project on pause, while I used some of that free time to investigate further into some design plans I was questioning, and also while I was designing some courses for it.

FreeClear will be available for Unix, Linux, Windows, and Apple workstations. Mobile versions will be available for Android and iOS mobile platforms at some later point in time.

The first version of FreeClear will be ready fairly soon. From a user standpoint, the first version will be nearly identical to GlideCLI. This means the first version is going to be command line based. 

FreeClear v2.0 will use a graphical user interface, instead of the command line.

# Features of new program:

# 1) Pre-loaded Courses:
Once FreeClear v2.0 is released, it will come loaded with some courses that I have already
designed. The courses will all be designed in accordance to behaviorism research, to ensure
a high yield of successful completion from the user base.

Complete curriculums will be loaded into later versions, all of which will ensure that 
the users will be able to pass with very high marks. I currently only have plans for U.S. 
curriculums. But I will later look into other nation's educational systems, and create 
curriculums for the ones that I speak the languages of as well. This will include German 
speaking nations fairly soon, especially since many of their schools are only in English. 
So far this is the planned rollout of courses for the new program:

    1. Complete GED curriculum

    2. Complete ASVAB test curriculum

    3. Complete College Entrance Exam curriculum

    4. Every subject available for CLEP tests, along with a menu for the user to easily design 
       their curriculum in accordance with the "Advising Guide" available from their institution.

    5. Every mathematics course. Each of which will have the option to list the necessary 
       courses that are the immediate pre-requisites, but not the pre-requisites of the 
       listed pre-requisites, unless the user clicks on that pre-requisite. This  
       mathematics portion of this new program will use a simplified relational-set data file 
       to represent the paths to learning different end-points, with the end-points being the 
       mathematical courses.

    6. Eventually the mathematical courses will be broken down into their constituent parts. The 
       program will then offer users the option of selecting a particular mathematical concept 
       that they desire to learn, and then route the shortest path of pre-requisite concepts that 
       lead to the desired end-point concept.


# 2) User-Made Courses:
There will be a way for users to construct new courses within the graphical 
user interface, as well as organizing these into a complete curriculum. This 
feature will be immediately available with the graphical user interface, but constructing 
a course in the program is a tedious process. Although, the methods available to the user will 
increasingly become easier to create a new course in the program.
    
    # Easy User-Made Courses:
        I will eventually know enough from the fields of artificial intelligence and/or machine 
        learning, in order to implement a system that provides these increasingly easier methods
        for an end-user to add a new course to the program. The source courses can exist either 
        digitally, or can be printed ink on paper, as well as audio and video. Everything I 
        have planned in this section are several years away from materialising, but they are 
        planned, and they will mostly be available to the user soon after the first of these 
        features is available to the end-user.
    
        There are several parts that the end goal consist of, as well as the necessary tasks 
        that the automated system must be proficient at performing:

            1. Automated construction of a course from physical a copy of a printed 
               book, or in an ebook built from images:

                i) The process of the automated system here is the same. The only thing different 
                   is that if the user wants the course generated from a physical book, then 
                   the user is going to have to take clear pictures of the pages, or scan the
                   pages.

               ii) The system will be trained to read text on images, and implement a system 
                   developed to divide the interpreted text into basic conceptual units, as 
                   well as being able to merge a conceptual unit that is divided between two 
                   pages, into a single conceptual unit.

              iii) Text only information - A stimulus must be generated to produce a desired
                   response from the user. There is more than one way to do this:
 
                            1. The system must be able to formulate meaningful questions 
                               associated with the concept, without revealing the response 
                               the user needs to generate in order to recieve reinforecement.
                               I believe this method requires the implementation of artificial 
                               intelligence that would need to be trained. While this is ok, I 
                               believe it means that this particular goal should be focused on 
                               after the alternatives have been achieved, unless the current 
                               language processing technological capabilities available are more 
                               advanced than I am currently aware of.

                            2. Fill in the blanks: Many course texts lend themselves well to 
                               having their individual concepts divided into an enumerated 
                               list of items, or being grouped into a parent concept that 
                               is made up of multiple little concepts. Usually the name of 
                               the concept could be presented to the user, such as the name of a
                               section heading. Another stimulus provided with the name would 
                               be the blank text entry boxes, because they should be labeled 
                               with a number. These hints should stimulate the user to 
                               eventually perform the desired responses correctly nearly 
                               every repetition that a particular concept is presented as a 
                               stimulus to the user.
                                

               iv) The system must recogize images that are inseparable from knowledge of a concept. 
                   An image in a text book is usually labeled with the portion of information 
                   in the text book that it is tied to. A lot of images are not needed though, 
                   so the system must be trained for that very common scenario to a high degree 
                   of accurately being able to discard units of information that are not relevant.
                   For instance, a Networking+ text book that I studied is possibly only 
                   40% of relevant information, if it was even that high. The rest is bad 
                   humor, repeated information, and information that served no purpose to 
                   the topic on hand, and only distracted away from it.

                v) A scientific subject, such as a biological science, anatomical images should 
                   often be extracted and stored as an individual conceptual unit that will 
                   be prepared for the user to learn. For example: An illustration of the left 
                   side of the human brain that is depicting several labeled regions that the
                   user should know the names of. The system will be trained to recognize each 
                   of the label names, trace a rectangular perimeter around the labels on the
                   image, designate a whole number for each label position starting at zero,
                   and copy each label into an array at the index that corresponds with the 
                   number of that the label was designated. This array will be stored within the data
                   file to be used to represent the non-illustrated portion of the concept for 
                   the teaching portion of the program to train the user to memorize. The system
                   will then fit textboxes within the perimeters that were traced around the
                   labels, to hide the text on the image from the user. The separate portion
                   of the program that simply suplies the stimulus information hints for the 
                   user to respond to, will present this type of concept on the first repetition
                   to the user, with the text boxes filled in from the array that corresponds 
                   to the designated image. The user will attempt to memorize the labels,
                   then respond to the program once ready to perform the first repetition 
                   of an attempt to recall the labels. In-turn, the user will be reinforced 
                   for every correct response to the stimulus after the program has calculated 
                   the values of the variables to store for the set of labels.

               vi) Mathematical concepts: The system must be able to recognize mathematical 
                   problems from images, and generate an accurate answer for every mathematical
                   problem, even if an answer is already present, in order to reduce the risk of
                   using an incorrectly produced answer that text book authors sometimes produce.
                   For concepts that have a problem to work out, it is usually preferable to 
                   use only the problem(s) as the stimulus, and not expect the user to also have 
                   to respond with the process that is explained. Sometimes the process is all 
                   that is given, in which case it would simply be broken down into its steps 
                   and presented to the user to fill in the blank list of steps of the named
                   topic.

                   If the mathematical concepts are new, as in, the mathematical information 
                   being input is newly invented concepts that have problems available for the 
                   user to work out, then every problem must already have a correct answer 
                   prepared, and the person who gave the system the data to generate the 
                   course, must use a provided visual tool to indicate which part of the image 
                   is a solution. Answers are handled exactly like the labels would be processed 
                   in the example given in the previous task that this system must be trained to 
                   perform. 




            2. Electronic source of information, such as a section of a web-site:

                i) This is mostly the same as the last section in everyway, except that there 
                   is usually text that does not require a system to be capable of interpretting 
                   visual information. This will still probably come later than the previous 
                   section, due to the last section being a more much more valuable priority 
                   to have available to users. The section of the web site will need to be 
                   scraped and processed mostly the same as the last section.


           3. Course generation for the blind: 
                i) I will research tools to develop for in order to accommodate the blind. 
                   The program will provide the option to use a brail peripheral, audio, 
                   and perhaps other tools and methods that may not yet exist, in order 
                   for it to be made possible for the blind to successfully progress through
                   the entirety of mathematics, as well as every other course that is generated, 
                   or included. This means that the Mnemonics course is going to have a blind
                   alternative for every method, as the techniques all rely on the ability 
                   to visualize, which is not possible for those who's visual cortex
                   has never been provided with information from the optic nerves.




# The Last Building Blocks

This section may not be the last building blocks of the upcoming program, but it will probably be the last building
blocks that I will be involved with. I imagine others will find more ways of improving the software long after I 
have worked on it.


The program will offer "memory-trials". These are a series of experiments that users will 
be able to volunteer to participate in. Initially; these trials will address the information that 
was absent from the research documents. After those initial variables have been more precisely 
determined, then several other series of trials will take place. These later trials will explore 
interests such as:

    1. Potentially designing a more accurate mathematical model for the forgetting curve
    
    2. Determining accurate mathematical models for the components of the Serial-Position Effect

    3. Defining the best organizational algorithm to reduce the intermediate dip between the 
       Primacy and Recency effects.

    4. Discovering more precise methods, and implimentations of methods, for:

        i) The optimization of phsychological reinforcement for the user upon providing desired 
           responses.

        ii) Increasing the probability that the user's behavior shapes to increasingly using the 
            software application to successfully learn information.

    5. Discovering more precise ways to administer the organization of information for a programmed 
       learning curriculum. This knowledge will allow the reorganization and implementation of all 
       material to be presented to users from every previously constructed course, and will be 
       implemented in the construction of all future courses.




# Why this new program will always be free

We live in a world that has had very in depth scientific research available on the cognitive science 
on learning and behavior since before the invention of the electronic computer, and that body of 
knowledge has only grown. Before electronic computers became a feasible option to implement this 
research to easily give mass numbers of people a very high level of education, primitive tools were 
invented to implement some of this research, mostly by a scientist named Burrhus Frederic Skinner, 
and the results were excellent. Yet, here we are today. We have extremely powerful computers that 
fit in our pockets, and a mountain of research that could be implemented in the education of people. 
Almost none of that research is being implemented in the education of people. Instead; we have been 
stuck with a society that values subjecting children to attending a part time prison for at least 13 
years of their lives, to learn material that could be obtained in less than 2 years. The societies of 
the world look at these extraordinarily expensive institutions, like Harvard, or Yale, as the Penacle 
of education, when all of the information that the students in these institution obtain could be gained 
for very little money, and often times no money at all. Our society's least desirable "educational" 
institutes, community colleges, are able to reject perfectly capable people, who score very highly on 
their entrance exam, from gaining admittance due to a lack of a piece of paper issued in the form of a
G.E.D.. I have been rejected for this very reason myself. All publically available institutes in the 
U.S.A. charge an insanely high amount of money, at a ratio that is ever increasing, to that of minimum 
wage. 


The methods used to "teach" people are incredibly out dated. Part of the current method can trace its roots 
to a time when information was passed in verbal form, due to the invention of paper not having occurred yet.
Now that we have had the technology of a writing utencil and ample supply of paper, along with the printing 
press that allow people to have zero reason to pay attention to a lecturer once they know how to read, as 
well as a massive body of research on the science of learning, along with extremely powerful computer systems 
that have been available to households since the late 1970's, which were perfectly powerful enough to, and 
those same ones still are, capable of being programmed to deliver an education better than that at our 
society's most valued educational institutes on the planet. Most people are still having to pay a high 
financial cost to sit in a room, watch a person say words that they could have just read in the first place, 
and often times forced to wait until the very last week of a class, or later, to recieve feedback to learn 
how well they are doing so that they can adjust to perform better--- well it's too late at that point.


Even the countries that charge the students nothing to gain an education in their nation have a lot of these same 
problems, the only benefit is that the student did not lose out on money, along with the several months they will 
never get back of their lives.

To make things worse, only part of the oral tradition is implemented in the educational institutes. The methods of 
memorization that were taught to allow people to retain what they learned, when the spoken word was the only tool 
that they had for the recodring of information, is no where to be found in our educational institutes. Today, the 
majority of the population feels stupid--- because it is. The stupidity that plagues our species is largely due to 
the education systems, and the people who profit off of keeping people ignorant, keeping people stuck with paying 
more than everything they have ever made, and sometimes ever will make, in hope of digging themselves out of poverty.



No more. We are dealing with a system of stupid, and oppression. It needs to be crushed. This is the start of that 
effort. In order for this to be successful, this software must grow to offer the HIGHEST POSSIBLE QUALITY of education 
that will be known to have ever existed, and it can not cost a single penny! I want to watch the "education system" 
fall to pieces, I want to see all of these people involved in one of the most massive scale scam operations known to 
man, lose their jobs, and I mean every single one of them. I want to see the people who run these institutions go 
into debt, and fall into that same pit they have been keeping people from finding their way out of, due to their
incredible amount of greed. The satisfaction of knowing this scam of a system is finally going to fall to pieces, 
because people are going to be able to finally learn that which the system has been keeping them from learning, is 
much more satisfying than any quantity of money that could ever be gained. If the system were interested in people 
learning, then it would not charge more than the people who need education the most more than they could ever afford, 
it would not be using half of a method used to educate people in a time before paper existed, and it would absolutely 
be on top of using the best, most accurate methods known to science that our highly advanced technology is fully able
to implement.

Companies will eventually see the difference in the quality of knowledge, and mathematical skills, from people who use 
this coming software, compared those who go to the "best" educational institutions. The public is going to take notice
when people come from these institutions more often than not, have a much harder time gaining employment compared to 
users of this software's educational resources. When everyone sees that the free option is the better option, these
"educational institutions" will eventually have no customers, and all of these con artists will finally be out of the job.





    Welcome to the future.