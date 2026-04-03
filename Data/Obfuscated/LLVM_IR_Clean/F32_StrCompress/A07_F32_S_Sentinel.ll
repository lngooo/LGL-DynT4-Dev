@.str = constant [5 x i8] c"%c%d\00"
@.str.1 = constant [2 x i8] c"\0A\00"
define dso_local void @Zm(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %7
7:
  %8 = load i8*, i8** %2
  %9 = load i32, i32* %3
  %10 = sext i32 %9 to i64
  %11 = getelementptr inbounds i8, i8* %8, i64 %10
  %12 = load i8, i8* %11
  %13 = icmp ne i8 %12, 0
  br i1 %13, label %14, label %46
14:
  %15 = load i32, i32* %3
  store i32 %15, i32* %4
  br label %16
16:
  %17 = load i8*, i8** %2
  %18 = load i32, i32* %4
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i8, i8* %17, i64 %19
  %21 = load i8, i8* %20
  %22 = sext i8 %21 to i32
  %23 = load i8*, i8** %2
  %24 = load i32, i32* %3
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i8, i8* %23, i64 %25
  %27 = load i8, i8* %26
  %28 = sext i8 %27 to i32
  %29 = icmp eq i32 %22, %28
  br i1 %29, label %30, label %34
30:
  br label %31
31:
  %32 = load i32, i32* %4
  %33 = add nsw i32 %32, 1
  store i32 %33, i32* %4
  br label %16
34:
  %35 = load i8*, i8** %2
  %36 = load i32, i32* %3
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i8, i8* %35, i64 %37
  %39 = load i8, i8* %38
  %40 = sext i8 %39 to i32
  %41 = load i32, i32* %4
  %42 = load i32, i32* %3
  %43 = sub nsw i32 %41, %42
  %44 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %40, i32 %43)
  %45 = load i32, i32* %4
  store i32 %45, i32* %3
  br label %7
46:
  %47 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.1, i64 0, i64 0))
  ret void
}
declare i32 @printf(i8*, ...)
