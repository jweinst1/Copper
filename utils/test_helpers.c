#include "test_helpers.h"

const char* 
test_help_find_substr(const char* string, const char* substring) {
	  int on = 0;
	  const char* index = NULL;
	  const char* traverse = substring; // resettable
	  while(*string)
	  {
		if(on)
		{
		  if(!*traverse) return index;
		  else if(*traverse == *string)
		  {
			traverse++;
		  }
		  else
		  {
			traverse = substring;
			index = NULL;
			on = 0;
		  }
		}
		else
		{
		  if(*string == *substring)
		  {
			on = 1;
			index = string;
			traverse++;
		  }
		}
		string++;
	  }
	  if(!*traverse) return index;
	  else return NULL;
}
