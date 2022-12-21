# yoentiendo
My attempt at creating a fully functional NES emulator.

What goes into that, exactly? Great question. I'm figuring it out myself as we go along here. But, generally speaking, the process is going to be as follows:

1. Create a CPU emulator (the NES uses an Ricoh 2A03, which is a slightly modified [MOS 6502](https://en.wikipedia.org/wiki/MOS_Technology_6502). 
2. Create an APU emulator (audio processing unit).
3. Create a GPU emulator.
4. Create a memory emulator.
5. Create some form of input, and...
6. Connect it all together.

The above order is not 1:1 with what the actual order will probably end up being, because I'm not sure what that order is going to be yet! I'll update all this as more progress is made. In any case, the goal of this documentation will be to help anyone interested figure out exactly what's going on, even if you have no experience at all in coding this sort of thing. Explanations for everything inbound!

Massive thanks to [Brooke Chalmers](https://github.com/breqdev), who is attempting (and much further along in) a similar project entitled *noentiendo*, and who has been, and continues to be, a shining lighthouse along the rocky coast of figuring all this out. Also shoutout to [Marat Fayzullin](https://fms.komkon.org/), whose documentation on how to generally do this sorta thing is another valuable guide.

Now we're playing with power.
