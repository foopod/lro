#ifndef LRO_DIALOG_LINES_H
#define LRO_DIALOG_LINES_H

#include "bn_vector.h"
#include "lro_dialog.h"

namespace lro
{
    class DialogLines{
        public:
        [[nodiscard]] bn::vector<DialogLine, 32> get_dialog_lines(int level)
        {
            bn::vector<DialogLine, 32> dialog_lines;
            switch (level)
            {
            case 1:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Grin, "Welcome!"));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "We are glad to have you onboard."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "To get started we will be doing some routine retrievals."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "These are bags that get misplaced and have..."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "ended up on the wrong flight."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Just move luggage around until you can..."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "get the RED suitcase off the plane."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Good Luck!"));
                return dialog_lines;
                break;
            case 2:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "This customer is very upset."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Grin, "They need their Dandruff Shampoo!"));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "It's in the RED suitcase."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Have fun!"));
                return dialog_lines;
                break;
            case 3:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Nice work on that Dandruff Shampoo!"));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Oh man! Now it is misplaced socks."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Just grab the RED suitcase like you did before."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Good Luck!"));
                return dialog_lines;
                break;
            case 4:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "RED suitcase as usual."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "This one is full of coffee beans, for a.."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "budding new cafe business."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Grin, "You got this!"));
                return dialog_lines;
                break;
            case 5:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Prized Heirloom Tomato Seeds."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Should I be telling you what is in all the bags?"));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Grin, "Probably not."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "But it makes the job more interesting.."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "and the day go a little faster."));
                return dialog_lines;
                break;
            case 6:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Angry, "Sigh."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Angry, "Underwear."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Angry, "Yep. They have a whole bag of dirty thongs."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Thanks bud!"));
                return dialog_lines;
                break;
            case 7:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Grin, "Okay. This one is a bit weird."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "This customer collects small RED suitcases."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "That RED suitcase is the russian doll of suitcases."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Have fun!"));
                return dialog_lines;
                break;
            case 8:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "You wouldn't think we misplace a lot."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "But with hundreds of flights a day, it can be a..."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "real mission to get them all on the right planes."));
                return dialog_lines;
                break; 
            case 9:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Huh..."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "It just occurred to me that all the misplaced bags..."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "are RED."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Maybe there is an issue with the luggage sorter."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "I'll send an email to the sorting department."));
                return dialog_lines;
                break;
            case 10:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Very Impressive. You are picking this up quickly!"));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Get this last one and you pass the training."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "We can move you up to Recruit and..."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "and find you something more challenging."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "I might even unlock the Arcade for you."));
                return dialog_lines;
                break;
            case 11:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Welcome back Recruit!"));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "The bags we are retriving now contain valuables."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "This one has an expensive digital camera."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Thanks!"));
                return dialog_lines;
                break;
            case 12:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Let's get straight back into it."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "This holds someone's stamp collection."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Good luck!"));
                return dialog_lines;
                break;
            case 13:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Grin, "HA!"));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Some guy won a hotdog eating contest. And now..."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "he is distraught because he can't find the trophy."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "We think it is in the RED bag there."));
                return dialog_lines;
                break;
            case 14:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "You are doing great!"));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "This one is delicate. It contains their..."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "grandmother's ashes."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Be careful!"));
                return dialog_lines;
                break;
            case 15:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "That last one was tough."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "This is a kids pokemon card collection."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Keep up the great work!"));
                return dialog_lines;
                break;
            case 16:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Phew. This is tough work ay?"));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Up next we have a student's 50,000 word Thesis."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "You got this! Own it!"));
                return dialog_lines;
                break;
            case 17:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Angry, "Oh No!"));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Angry, "Okay. So this kid packed his turtle into his suitcase."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "And his parents only just figured it out."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "We need to rescue that turtle!"));
                return dialog_lines;
                break;
            case 18:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Antique vase in this one."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Very important that it doesn't get damaged."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Grin, "Otherwise this guy's Aunt will actually kill us."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Grin, "Or so he says."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Be a bit careful..."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "but not too careful, gotta stick to schedule."));
                return dialog_lines;
                break;
            case 19:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "You are doing really well."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Grin, "There is smoked tofu in this one. Yum!"));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Keep up the good work."));
                return dialog_lines;
                break;
            case 20:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Okay. So the sorting department emailed us back."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "They have noticed the problem with the RED cases too."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "And they are working on fixing the problem."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Anyway, let's get this bag of mixed lollies."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Grin, "And it's about time you got another promotion."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "You have been nailing it lately!"));
                return dialog_lines;
                break;
            case 21:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Hooray, "Congrats! You are our newest Senior team member."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Now you will be able to tackle even tougher retrievals."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "This suitcase contains an ancient fossil."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Tyrannosaurus Rex tarsal bones."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Please do your best to retrieve it in a timely manner."));
                return dialog_lines;
                break;
            case 22:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "This next one is an Orchestral Violin."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "And the violinist needs it for a gig tonight!"));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "They would really appreciate a speedy retrieval."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Thanks in advance!"));
                return dialog_lines;
                break;
            case 23:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "This one might be tough."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Everything is wedged in together at the front."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Hopefully it isn't too hard to get this one out."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "There is an antique broach in there."));
                return dialog_lines;
                break;
            case 24:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "There is a very famous painting in this suitcase."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "So much so that they wouldn't tell me what it is."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Grin, "You got this!"));
                return dialog_lines;
                break;
            case 25:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "We are helping this very important passenger."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "They seemed to indicate that it contains..."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "a very large amount of money."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Good luck!"));
                return dialog_lines;
                break;
            case 26:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "A photographer's important negatives are stored..."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "in this misplaced RED suitcase."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Please help them retrieve it."));
                return dialog_lines;
                break;
            case 27:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Great maneuvering in there!"));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "You are really getting good at this."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "This one should be interesting."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "A stunt driver needs his keys and they are..."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "buried deep in that RED suitcase."));
                return dialog_lines;
                break;
            case 28:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Ooof!"));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "There is a lot of luggage in there."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "I'm sure you can handle this though."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Just pull out that RED one."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Grin, "It's full of imported pasta!"));
                return dialog_lines;
                break;
            case 29:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Grin, "Wow. Very impressive."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "I'm going to have to promote you again..."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "if you keep this up."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Get this one out and we can start talking promotions."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "I think they said is is an old jewellery box."));
                return dialog_lines;
                break;
            case 30:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Sigh, "I'm really sorry."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Sigh, "Every single job I have for you is a RED suitcase."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Angry, "I wish the sorting department would get..."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Angry, "act together. This is getting annoying."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Sigh, "Sigh. Oh well."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Grab that bag of incubating frog's eggs..."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "and I will start on your promotion paper work."));
                return dialog_lines;
                break;
            case 31:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Hooray, "Congratulations! You are an expert now!"));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Also in other news, we discovered the problem behind..."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "the RED suitcases. It isn't a problem at all."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Management installed MLATS."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Misplaced Luggage Advanced Tracking Software."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "It tags all the missing luggage RED."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "It is supposed to make our job easier."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Grin, "Hahahaha, I thought I was losing my marbles."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Anyway, hop to retrieving these secret documents."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Grin, "Ooops, I mean, normal, everyday documents."));
                return dialog_lines;
                break;
            case 32:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "I hope things aren't getting too diffcult."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "You are one of the best we have now."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "That's why we give you these high priority items."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "This one is a life saving research experiment."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Grin, "Keep up the great work!"));
                return dialog_lines;
                break;
            case 33:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "This one is going be tough."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "But it is also a very urgent job."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "This suitcase holds a Crystal Skull, "));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "from a recent archaelogical find in Peru."));
                return dialog_lines;
                break;
            case 34:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "You are on fire!."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Grin, "No no, you are fine, not literally on fire."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "This suitcase may as well be though."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "It contains Plutonium!"));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "But don't worry, it is totally safe."));
                return dialog_lines;
                break;
            case 35:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Grin, "Don't tell anyone, but this suitcase belongs to..."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Grin, "a very famous director."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "I can't tell you their name, but they directed..."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "a movie about a very precious ring."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Thanks in advance!"));
                return dialog_lines;
                break;
            case 36:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Great work!"));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "In this red bag lies an important book..."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "that once belonged to the Pope."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "He needs it back at any cost!"));
                return dialog_lines;
                break;
            case 37:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Angry, "Hummmph!"));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Sigh, "This suitcase is mine. It contains something... "));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Sigh, "deeply sentimental."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "My modded Gameboy Advance."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Angry, "I can't believe they put it on the wrong flight."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Please do whatever you can to get it back safely."));
                return dialog_lines;
                break;
            case 38:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "This is something we don't get everyday."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Evidence from the local Police Department."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "This needs to be handled with sensitivity."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "You did the sensitivity training right?"));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Teeth, "Right?"));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Sigh, "Well, then, I guess this is your training."));
                return dialog_lines;
                break;
            case 39:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Wow, very impressive."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Soon you won't need me anymore."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "At this rate we will have to make you..."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "an Officer too."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "To be honest, you haven't ever really needed..."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "me as your supervisor."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Just grab this exotic butterfly collection..."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "and I will get started on the paperwork."));
                return dialog_lines;
                break;
            case 40:
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "It will be sad to see you go."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "But I know you can handle being an Officer."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Let's do one more together for posterity."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "This one belongs to a foreign diplomat."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "I think it's their laptop."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "Thanks again for being such an excellent..."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "colleague and friend."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Happy, "I am sure I will still see you around the airport."));
                dialog_lines.push_back(DialogLine(Speaker::Boss, Emotion::Grin, "Ciao mate!"));
                return dialog_lines;
                break;
            case 41:
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "Welcome Officer."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "Your first mission as an Officer is for..."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "the FBI. I can't share anymore."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "No more RED suitcases for you either..."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "You will be on BLACK ones from this point forward."));
                return dialog_lines;
                break;
            case 42:
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "Good."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "I know previously your supervisor would share..."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "with you the contents of the luggage."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "However as an Officer you will handle..."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "luggage with extremely classified items."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "Therefore I can only share some details."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "This piece of luggage is travelling to..."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "the Museum of Natural History."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "Retrieve the black bag no matter the consequences."));
                return dialog_lines;
                break;
            case 43:
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "*COUGH*."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "I shouldn't even be telling you this."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "But this package belongs to the Queen of England."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "Keep it safe!"));
                return dialog_lines;
                break;
            case 44:
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "This one is for NASA."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "I don't know what it is."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "Maybe a moon rock?"));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "Maybe a satellite?"));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "Maybe some ultra secret blueprints?"));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "Whatever it is. DON'T OPEN IT!"));
                return dialog_lines;
                break;
            case 45:
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "Your old supervisor told me you were good."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "But damn! Your skills are impressive!"));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "This one comes to us from the CIA."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "Keep it on the DL."));
                return dialog_lines;
                break;
            case 46:
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "This is a presidential matter."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "Please handle it with the utmost care."));
                return dialog_lines;
                break;
            case 47:
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "The Federal Bank has asked us to secure..."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "this briefcase."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "It is critical to their operation."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "Success is for those who work hard."));
                return dialog_lines;
                break;
            case 48:
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "Great work!"));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "Just excellent retrieval techniques!"));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "I'm sure you can handle this one too."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "It's an important delivery for the..."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "United Nations."));
                return dialog_lines;
                break;
            case 49:
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "Hmm."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "This request is from a Mr. James Bond."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "And at this point I'm too afraid to question it."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "So let's just roll with it."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "Thanks for the support."));
                return dialog_lines;
                break;
            case 50:
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "This is the last job we have for now."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "With MLATS and the work the sorting team..."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "have been doing, there are fewer and fewer..."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "suitcases being misplaced."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "Thank you for your dedication."));
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "We are proud of you Officer."));
                return dialog_lines;
                break;
            default:
                dialog_lines.push_back(DialogLine(Speaker::Anon, Emotion::Happy, "Good Luck!"));
                return dialog_lines;
                break;
            }
            
        }
    };
}

#endif
