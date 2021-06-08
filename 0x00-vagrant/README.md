What is source code management?
It allows a developer to organize code iterations chronologically, and version it for an application. The most powerful features of source code management systems are in how they allow teams of very diverse sizes to work together on the same application simultaneously.

Some terms that are common to all of them:

A project will be called repository, it’s representing the index/the filesystem root of your project.
Developers might create branches of the codebase, that they will iterate on separately to other developers. For instance, a branch can be meant to be used for a given feature, or a given bug fix. One can create however many branches they need.
Once a branch is ready for it (it’s been tested, peer-reviewed, etc.), it can be merged back to the main branch. The main branch may be called differently: in Git it’s called master , in SVN it’s called trunk.
While coding on their branch, developers are meant to work in small, atomic iterations, called commits. All commits have a commit message describing in one sentence what’s in there.
All commits together are called the history , and it’s a big deal to write meaningful commits and commit messages in order to keep the project’s history clean at a glance, to understand what has been going on and who did what.
Some people might be modifying the same pieces on the codebase on different branches, and this could create conflicts when one merges those branches together. Some of those conflicts can obviously only be fixed by a human, and each system has a different way to manage merge conflicts.

