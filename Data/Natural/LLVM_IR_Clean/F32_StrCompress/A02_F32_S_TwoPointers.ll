@.str = constant [6 x i8] c"%c%ld\00"
@.str.1 = constant [2 x i8] c"\0A\00"
define dso_local void @StrCompress(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i8*
  %4 = alloca i8*
  store i8* %0, i8** %2
  %6 = load i8*, i8** %2
  store i8* %6, i8** %3
  %8 = load i8*, i8** %2
  store i8* %8, i8** %4
  br label %9
9:
  %10 = load i8*, i8** %3
  %11 = load i8, i8* %10
  %12 = icmp ne i8 %11, 0
  br i1 %12, label %13, label %37
13:
  %14 = load i8*, i8** %3
  store i8* %14, i8** %4
  br label %15
15:
  %16 = load i8*, i8** %4
  %17 = load i8, i8* %16
  %18 = sext i8 %17 to i32
  %19 = load i8*, i8** %3
  %20 = load i8, i8* %19
  %21 = sext i8 %20 to i32
  %22 = icmp eq i32 %18, %21
  br i1 %22, label %23, label %26
23:
  %24 = load i8*, i8** %4
  %25 = getelementptr inbounds i8, i8* %24, i32 1
  store i8* %25, i8** %4
  br label %15
26:
  %27 = load i8*, i8** %3
  %28 = load i8, i8* %27
  %29 = sext i8 %28 to i32
  %30 = load i8*, i8** %4
  %31 = load i8*, i8** %3
  %32 = ptrtoint i8* %30 to i64
  %33 = ptrtoint i8* %31 to i64
  %34 = sub i64 %32, %33
  %35 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @.str, i64 0, i64 0), i32 %29, i64 %34)
  %36 = load i8*, i8** %4
  store i8* %36, i8** %3
  br label %9
37:
  %38 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.1, i64 0, i64 0))
  ret void
}
declare i32 @printf(i8*, ...)
