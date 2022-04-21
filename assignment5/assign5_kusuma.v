module assign5_kusuma(
input wire x,
input wire y,

output wire redled,
output wire greenled,
output wire blueled
);


reg lhs, rhs;
always @(*)
begin
lhs = x|(!y);
rhs = (x&y) |(x&(!y)) | ((!x) &(!y));
if(lhs== 1)
begin
redled = 1;
end
else
begin
redled = 0;
end
if(rhs== 1)
begin
blueled = 1;
end
else
begin
blueled = 0;
end
end
endmodule
