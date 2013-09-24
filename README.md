Group10
=======

Husband and Wife Problem

This repository would contain codes demonstrating semphores, busy waiting, spinlock, monitors, critical sections etc.

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
