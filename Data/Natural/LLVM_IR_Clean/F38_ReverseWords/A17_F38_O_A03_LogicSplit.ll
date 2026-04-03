@.str = constant [2 x i8] c" \00"
define dso_local void @ReverseWords(i8* %0) {
  %2 = alloca i8*
  %3 = alloca [256 x i8]
  %4 = alloca [100 x i8*]
  %5 = alloca i32
  %6 = alloca i8*
  store i8* %0, i8** %2
  %8 = getelementptr inbounds [256 x i8], [256 x i8]* %3, i64 0, i64 0
  %9 = load i8*, i8** %2
  %10 = call i8* @strcpy(i8* %8, i8* %9)
  store i32 0, i32* %5
  %14 = getelementptr inbounds [256 x i8], [256 x i8]* %3, i64 0, i64 0
  %15 = call i8* @strtok(i8* %14, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  store i8* %15, i8** %6
  br label %16
16:
  %17 = load i8*, i8** %6
  %18 = icmp ne i8* %17, null
  br i1 %18, label %19, label %25
19:
  %20 = load i8*, i8** %6
  %21 = load i32, i32* %5
  %22 = add nsw i32 %21, 1
  store i32 %22, i32* %5
  %23 = sext i32 %21 to i64
  %24 = getelementptr inbounds [100 x i8*], [100 x i8*]* %4, i64 0, i64 %23
  store i8* %20, i8** %24
  br label %25
25:
  br label %26
26:
  %27 = call i8* @strtok(i8* null, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  store i8* %27, i8** %6
  %28 = icmp ne i8* %27, null
  br i1 %28, label %16, label %29
29:
  %30 = load i8*, i8** %2
  %31 = getelementptr inbounds i8, i8* %30, i64 0
  store i8 0, i8* %31
  br label %32
32:
  %33 = load i32, i32* %5
  %34 = icmp sgt i32 %33, 0
  br i1 %34, label %35, label %49
35:
  %36 = load i8*, i8** %2
  %37 = load i32, i32* %5
  %38 = add nsw i32 %37, -1
  store i32 %38, i32* %5
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds [100 x i8*], [100 x i8*]* %4, i64 0, i64 %39
  %41 = load i8*, i8** %40
  %42 = call i8* @strcat(i8* %36, i8* %41)
  %43 = load i32, i32* %5
  %44 = icmp sgt i32 %43, 0
  br i1 %44, label %45, label %48
45:
  %46 = load i8*, i8** %2
  %47 = call i8* @strcat(i8* %46, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  br label %48
48:
  br label %32
49:
  ret void
}
declare i8* @strcpy(i8*, i8*)
declare i8* @strtok(i8*, i8*)
declare i8* @strcat(i8*, i8*)
