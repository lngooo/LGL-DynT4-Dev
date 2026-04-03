define dso_local i32 @WordCount(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %7
7:
  %8 = load i8*, i8** %2
  %9 = load i32, i32* %4
  %10 = sext i32 %9 to i64
  %11 = getelementptr inbounds i8, i8* %8, i64 %10
  %12 = load i8, i8* %11
  %13 = icmp ne i8 %12, 0
  br i1 %13, label %16, label %14
14:
  br label %55
16:
  %17 = load i8*, i8** %2
  %18 = load i32, i32* %4
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i8, i8* %17, i64 %19
  %21 = load i8, i8* %20
  %22 = sext i8 %21 to i32
  %23 = call i32 @isspace(i32 %22)
  %24 = icmp ne i32 %23, 0
  br i1 %24, label %46, label %25
25:
  %26 = load i8*, i8** %2
  %27 = load i32, i32* %4
  %28 = add nsw i32 %27, 1
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i8, i8* %26, i64 %29
  %31 = load i8, i8* %30
  %32 = sext i8 %31 to i32
  %33 = call i32 @isspace(i32 %32)
  %34 = icmp ne i32 %33, 0
  br i1 %34, label %44, label %35
35:
  %36 = load i8*, i8** %2
  %37 = load i32, i32* %4
  %38 = add nsw i32 %37, 1
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i8, i8* %36, i64 %39
  %41 = load i8, i8* %40
  %42 = sext i8 %41 to i32
  %43 = icmp eq i32 %42, 0
  br label %44
44:
  %45 = phi i1 [ true, %25 ], [ %43, %35 ]
  br label %46
46:
  %47 = phi i1 [ false, %16 ], [ %45, %44 ]
  %48 = zext i1 %47 to i64
  %49 = select i1 %47, i32 1, i32 0
  %50 = load i32, i32* %3
  %51 = add nsw i32 %50, %49
  store i32 %51, i32* %3
  br label %52
52:
  %53 = load i32, i32* %4
  %54 = add nsw i32 %53, 1
  store i32 %54, i32* %4
  br label %7
55:
  %56 = load i32, i32* %3
  ret i32 %56
}
declare i32 @isspace(i32)
