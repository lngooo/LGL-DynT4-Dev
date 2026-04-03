@__const.IntToRoman.v = constant [13 x i32] [i32 1000, i32 900, i32 500, i32 400, i32 100, i32 90, i32 50, i32 40, i32 10, i32 9, i32 5, i32 4, i32 1]
@.str = constant [2 x i8] c"M\00"
@.str.1 = constant [3 x i8] c"CM\00"
@.str.2 = constant [2 x i8] c"D\00"
@.str.3 = constant [3 x i8] c"CD\00"
@.str.4 = constant [2 x i8] c"C\00"
@.str.5 = constant [3 x i8] c"XC\00"
@.str.6 = constant [2 x i8] c"L\00"
@.str.7 = constant [3 x i8] c"XL\00"
@.str.8 = constant [2 x i8] c"X\00"
@.str.9 = constant [3 x i8] c"IX\00"
@.str.10 = constant [2 x i8] c"V\00"
@.str.11 = constant [3 x i8] c"IV\00"
@.str.12 = constant [2 x i8] c"I\00"
@__const.IntToRoman.s = constant [13 x i8*] [i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.1, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.2, i32 0, i32 0), i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.3, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.4, i32 0, i32 0), i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.5, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.6, i32 0, i32 0), i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.7, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.8, i32 0, i32 0), i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.9, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.10, i32 0, i32 0), i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.11, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.12, i32 0, i32 0)]
define dso_local void @IntToRoman(i32 %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca [13 x i32]
  %6 = alloca [13 x i8*]
  %7 = alloca i32
  %8 = alloca i32
  store i32 %0, i32* %3
  store i8* %1, i8** %4
  store i32 0, i32* %7
  store i32 0, i32* %8
  %15 = load i8*, i8** %4
  %16 = getelementptr inbounds i8, i8* %15, i64 0
  store i8 0, i8* %16
  br label %17
17:
  %18 = load i32, i32* %7
  %19 = icmp ne i32 %18, -1
  br i1 %19, label %20, label %53
20:
  %21 = load i32, i32* %7
  switch i32 %21, label %52 [
    i32 0, label %22
    i32 1, label %28
  ]
22:
  %23 = load i32, i32* %8
  %24 = icmp slt i32 %23, 13
  br i1 %24, label %25, label %26
25:
  store i32 1, i32* %7
  br label %27
26:
  store i32 -1, i32* %7
  br label %27
27:
  br label %52
28:
  %29 = load i32, i32* %3
  %30 = load i32, i32* %8
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds [13 x i32], [13 x i32]* %5, i64 0, i64 %31
  %33 = load i32, i32* %32
  %34 = icmp sge i32 %29, %33
  br i1 %34, label %35, label %48
35:
  %36 = load i8*, i8** %4
  %37 = load i32, i32* %8
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds [13 x i8*], [13 x i8*]* %6, i64 0, i64 %38
  %40 = load i8*, i8** %39
  %41 = call i8* @strcat(i8* %36, i8* %40)
  %42 = load i32, i32* %8
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds [13 x i32], [13 x i32]* %5, i64 0, i64 %43
  %45 = load i32, i32* %44
  %46 = load i32, i32* %3
  %47 = sub nsw i32 %46, %45
  store i32 %47, i32* %3
  br label %51
48:
  %49 = load i32, i32* %8
  %50 = add nsw i32 %49, 1
  store i32 %50, i32* %8
  store i32 0, i32* %7
  br label %51
51:
  br label %52
52:
  br label %17
53:
  ret void
}
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* noalias nocapture writeonly, i8* noalias nocapture readonly, i64, i1 immarg)
declare i8* @strcat(i8*, i8*)
