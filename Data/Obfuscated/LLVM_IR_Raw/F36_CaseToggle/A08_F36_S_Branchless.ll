@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @bhZW7(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  store i8* %0, i8** %2
  br label %5
5:
  %6 = load i8*, i8** %2
  %7 = load i8, i8* %6
  %8 = icmp ne i8 %7, 0
  br i1 %8, label %9, label %51
9:
  %11 = load i8*, i8** %2
  %12 = load i8, i8* %11
  %13 = sext i8 %12 to i32
  %14 = icmp sge i32 %13, 97
  br i1 %14, label %15, label %20
15:
  %16 = load i8*, i8** %2
  %17 = load i8, i8* %16
  %18 = sext i8 %17 to i32
  %19 = icmp sle i32 %18, 122
  br label %20
20:
  %21 = phi i1 [ false, %9 ], [ %19, %15 ]
  %22 = zext i1 %21 to i32
  store i32 %22, i32* %3
  %24 = load i8*, i8** %2
  %25 = load i8, i8* %24
  %26 = sext i8 %25 to i32
  %27 = icmp sge i32 %26, 65
  br i1 %27, label %28, label %33
28:
  %29 = load i8*, i8** %2
  %30 = load i8, i8* %29
  %31 = sext i8 %30 to i32
  %32 = icmp sle i32 %31, 90
  br label %33
33:
  %34 = phi i1 [ false, %20 ], [ %32, %28 ]
  %35 = zext i1 %34 to i32
  store i32 %35, i32* %4
  %36 = load i8*, i8** %2
  %37 = load i8, i8* %36
  %38 = sext i8 %37 to i32
  %39 = load i32, i32* %3
  %40 = mul nsw i32 %39, 32
  %41 = sub nsw i32 %38, %40
  %42 = load i32, i32* %4
  %43 = mul nsw i32 %42, 32
  %44 = add nsw i32 %41, %43
  %45 = trunc i32 %44 to i8
  %46 = load i8*, i8** %2
  store i8 %45, i8* %46
  %47 = load i8*, i8** %2
  %48 = getelementptr inbounds i8, i8* %47, i32 1
  store i8* %48, i8** %2
  br label %5
51:
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
  call void @bhZW7(i8* %12)
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
