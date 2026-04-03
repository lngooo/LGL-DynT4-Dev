@__const.knIy1.tZ = constant [2 x i8*] [i8* blockaddress(@knIy1, %15), i8* blockaddress(@knIy1, %12)]
@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @knIy1(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca [2 x i8*]
  store i32 %0, i32* %3
  %6 = load i32, i32* %3
  %7 = icmp slt i32 %6, 0
  %8 = zext i1 %7 to i32
  %9 = sext i32 %8 to i64
  %10 = getelementptr inbounds [2 x i8*], [2 x i8*]* %4, i64 0, i64 %9
  %11 = load i8*, i8** %10
  br label %19
12:
  %13 = load i32, i32* %3
  %14 = sub nsw i32 0, %13
  store i32 %14, i32* %2
  br label %17
15:
  %16 = load i32, i32* %3
  store i32 %16, i32* %2
  br label %17
17:
  %18 = load i32, i32* %2
  ret i32 %18
19:
  %20 = phi i8* [ %11, %1 ]
  indirectbr i8* %20, [label %15, label %12]
}
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* noalias nocapture writeonly, i8* noalias nocapture readonly, i64, i1 immarg)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %9
8:
  store i32 1, i32* %3
  br label %16
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @atoi(i8* %12)
  %14 = call i32 @knIy1(i32 %13)
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %14)
  store i32 0, i32* %3
  br label %16
16:
  %17 = load i32, i32* %3
  ret i32 %17
}
declare i32 @printf(i8*, ...)
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i64 @strtol(i8*, i8**, i32)
