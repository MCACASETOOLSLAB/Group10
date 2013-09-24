Group10
=======

Husband and Wife Problem


PROBLEM STATEMENT::

time    HUSBAND		 		                	                 WIFE


8:00	Look in Fridge.out of Milk		

8:05	Leave for store		

8:10	Arrive at store			                          	Look in Frige. Out of milk

8:15	Buy Milk			                                leave for store

8:20	Leave the store.		                           	Arrive at store

8:25	Arrive home, put milk in the fridge	        		Buy Milk

8:30				                          	            leave the store

8:35						                                Arrive home. OH NO!!!!




About the Problem:
==================

This real day problem easily parallels the problem of process synchronization in an OS.

Here milk can act as shared resource between the two processes husband and wife.
The husband here after noticing the current state of the milk goes to purchase milk without 
signalling to his wife and When wife notices it, she too does the same thing which results in
problem.

To avoid this the two processes could have used some kind of mutual exclusion principle
between themselves in the form of a message passed which would work as a signal to the wife to wait
for the husband.

Not just between husband and wife this problem could be generalized between more members of the family
so there would be more than 2 processes searching for the shared resource milk
In that case to avoid the problem of race condition, we can implement counting semaphore so that wen one 
process goes to fetch the milk, other processes should wait.

One more thing I would like to add is the 'store' can act as a critical section, only one process should 
be allowed to enter at a time.

Or should we keep it simple like: only one process should be allowed to go out of the house and rest must
wait inside until the earlier process arrives. Then in that case the door of the house become the critical section.
