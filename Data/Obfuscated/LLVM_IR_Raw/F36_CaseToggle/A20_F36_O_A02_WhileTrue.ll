@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @IMZ(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i8
  store i8* %0, i8** %2
  br label %4
4:
  %5 = load i8*, i8** %2
  %6 = load i8, i8* %5
  %7 = icmp ne i8 %6, 0
  br i1 %7, label %9, label %8
8:
  br label %36
9:
  %10 = load i8*, i8** %2
  %11 = load i8, i8* %10
  store i8 %11, i8* %3
  %12 = load i8, i8* %3
  %13 = zext i8 %12 to i32
  %14 = icmp sge i32 %13, 97
  br i1 %14, label %15, label %19
15:
  %16 = load i8, i8* %3
  %17 = zext i8 %16 to i32
  %18 = icmp sle i32 %17, 122
  br i1 %18, label %27, label %19
19:
  %20 = load i8, i8* %3
  %21 = zext i8 %20 to i32
  %22 = icmp sge i32 %21, 65
  br i1 %22, label %23, label %33
23:
  %24 = load i8, i8* %3
  %25 = zext i8 %24 to i32
  %26 = icmp sle i32 %25, 90
  br i1 %26, label %27, label %33
27:
  %28 = load i8, i8* %3
  %29 = zext i8 %28 to i32
  %30 = xor i32 %29, 32
  %31 = trunc i32 %30 to i8
  %32 = load i8*, i8** %2
  store i8 %31, i8* %32
  br label %33
33:
  %34 = load i8*, i8** %2
  %35 = getelementptr inbounds i8, i8* %34, i32 1
  store i8* %35, i8** %2
  br label %4
36:
  ret void
}
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
  store i32 0, i32* %3
  br label %17
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  call void @IMZ(i8* %12)
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 1
  %15 = load i8*, i8** %14
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i8* %15)
  store i32 0, i32* %3
  br label %17
17:
  %18 = load i32, i32* %3
  ret i32 %18
}
declare i32 @printf(i8*, ...)
