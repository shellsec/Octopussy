<%
my %arg = @_;
my $name = $arg{name} || "status";
my @list = ();
push(@list, "-ANY-")	if (NOT_NULL($arg{any}));
push(@list, ( { label => "_TICKET_OPENED", value => "Opened" },
	{ label => "_TICKET_WAIT_FOR_INFO", value => "Waiting for Info" },
	{ label => "_TICKET_WORK_PROGRESS", value => "Work in Progress" },
	{ label => "_TICKET_CLOSED", value => "Closed" } ) );
%>
<AAT:Selector name="$name" list=\@list selected="$arg{selected}" />
