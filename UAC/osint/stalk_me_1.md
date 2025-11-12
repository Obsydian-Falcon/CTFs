## Challenge
🎯 Your mission — should you choose to accept it — is to 🔍 uncover which Software I'm learning in my 3️⃣rd chapter of the 🖥️ ICT subject. Flag format : uacCTF{Software}
author: b34rn00b

## What I did

### Initial Reconnaissance
* **Tools used:**
	* [sherlock](https://github.com/sherlock-project/sherlock) (username search)
	* [malfrats osint map](https://map.malfrats.industries/) (OSINT tools wiki)
	* [maigret](https://github.com/soxoj/maigret) (build dossier from online presence)

### Phase 1: Username Investigation
* Started with sherlock username lookup: `sherlock b34rn00b`
	* Initial results didn't yield much useful info
* Tried Google dorking: `allinurl: b34rn00b`
	* **Found their personal website:** "b34rn00b.xyz"
	* Site contained mostly personal projects and guides—no direct flag info

### Phase 2: Expanding the Search
* Ran maigret to build a comprehensive dossier on b34rn00b
	* **Key discovery:** Found a SCRIBD account linked to username `electrotech156`
* Pivoted to investigate electrotech156:
	* Ran maigret again on this username
	* Checked their SCRIBD profile for hosted documents

### Phase 3: Dead End - Emoji Analysis (Rabbithole)
While waiting for sherlock to complete, I got sidetracked analyzing the challenge emojis:
* 🎯 = Bullseye = U+1F3AF
* 🔍 = Magnifying Glass Tilted Left = U+1F50D
* 3️⃣ = Keycap 3 = U+33 U+FE0F U+20E3
* 🖥️ = Desktop Computer = U+1F5A5 U+FE0F

Also researched what ICT (Information and Communications Technology) means—turned out to be another rabbithole since it's an extremely broad field covering everything from cloud computing to robotics.

### Phase 4: The Breakthrough
*Took a break and came back with fresh eyes*

* Returned to the SCRIBD account and **found the author's CV** (can't believe I missed it earlier!)
* **Critical info from CV:** Author attends **SRKGVMHSS** school

### Phase 5: Tracking Down the School
* Googled "SRKGVMHSS school"
	* **Location identified:** Thrissur district, Kerala, India
* Searched for official textbooks for this region:
	* Query: `Kerala SCERT ICT textbook PDF`
	* Found: Official ICT textbook for Class 8 (2019 edition)
* Refined search for current materials:
	* Query: `INFORMATION AND COMMUNICATIONS TECHNOLOGY Government of Kerala Department of General Education State Council of Educational Research and Training (SCERT), Kerala 2025`
* After clicking through several links, **finally located the correct textbook:** [Class 9 ICT English textbook PDF](https://samagra.kite.kerala.gov.in/files/samagra-resource/uploads2/tbookscmq/eng/9/16/ICT_Eng_IX_1748858267171_290040121.pdf)
* Checked Chapter 3 of the textbook

**Flag: uacCTF{PictoBlox}**

