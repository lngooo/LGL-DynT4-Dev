define dso_local i32 @WordCount(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %5
5:
  %6 = load i8*, i8** %2
  %7 = load i8, i8* %6
  %8 = icmp ne i8 %7, 0
  br i1 %8, label %9, label %61
9:
  %10 = load i8*, i8** %2
  %11 = load i8, i8* %10
  %12 = sext i8 %11 to i32
  %13 = call i32 @isspace(i32 %12)
  %14 = icmp ne i32 %13, 0
  br i1 %14, label %15, label %33
15:
  br label %16
16:
  %17 = load i8*, i8** %2
  %18 = load i8, i8* %17
  %19 = sext i8 %18 to i32
  %20 = icmp ne i32 %19, 0
  br i1 %20, label %21, label %27
21:
  %22 = load i8*, i8** %2
  %23 = load i8, i8* %22
  %24 = sext i8 %23 to i32
  %25 = call i32 @isspace(i32 %24)
  %26 = icmp ne i32 %25, 0
  br label %27
27:
  %28 = phi i1 [ false, %16 ], [ %26, %21 ]
  br i1 %28, label %29, label %32
29:
  %30 = load i8*, i8** %2
  %31 = getelementptr inbounds i8, i8* %30, i32 1
  store i8* %31, i8** %2
  br label %16
32:
  br label %60
33:
  %34 = load i32, i32* %3
  %35 = add nsw i32 %34, 1
  store i32 %35, i32* %3
  br label %36
36:
  %37 = load i8*, i8** %2
  %38 = load i8, i8* %37
  %39 = sext i8 %38 to i32
  %40 = icmp ne i32 %39, 0
  br i1 %40, label %41, label %48
41:
  %42 = load i8*, i8** %2
  %43 = load i8, i8* %42
  %44 = sext i8 %43 to i32
  %45 = call i32 @isspace(i32 %44)
  %46 = icmp ne i32 %45, 0
  %47 = xor i1 %46, true
  br label %48
48:
  %49 = phi i1 [ false, %36 ], [ %47, %41 ]
  br i1 %49, label %50, label %59
50:
  %51 = load i8*, i8** %2
  %52 = load i8, i8* %51
  %53 = sext i8 %52 to i32
  %54 = icmp eq i32 %53, 0
  br i1 %54, label %55, label %56
55:
  br label %59
56:
  %57 = load i8*, i8** %2
  %58 = getelementptr inbounds i8, i8* %57, i32 1
  store i8* %58, i8** %2
  br label %36
59:
  br label %60
60:
  br label %5
61:
  %62 = load i32, i32* %3
  ret i32 %62
}
declare i32 @isspace(i32)
