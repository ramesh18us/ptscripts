Action()
{
	// comment3
	lr_start_transaction("test1");
	
	lr_think_time(5);
	
	lr_end_transaction("test1", LR_AUTO);
//comment

	return 0;
}
