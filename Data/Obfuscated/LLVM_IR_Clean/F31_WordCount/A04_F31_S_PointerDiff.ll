define dso_local i32 @ZE(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %5
5:
  %6 = load i8*, i8** %2
  %7 = load i8, i8* %6
  %8 = icmp ne i8 %7, 0
  br i1 %8, label %9, label %52
9:
  br label %10
10:
  %11 = load i8*, i8** %2
  %12 = load i8, i8* %11
  %13 = sext i8 %12 to i32
  %14 = icmp ne i32 %13, 0
  br i1 %14, label %15, label %21
15:
  %16 = load i8*, i8** %2
  %17 = load i8, i8* %16
  %18 = sext i8 %17 to i32
  %19 = call i32 @isspace(i32 %18)
  %20 = icmp ne i32 %19, 0
  br label %21
21:
  %22 = phi i1 [ false, %10 ], [ %20, %15 ]
  br i1 %22, label %23, label %26
23:
  %24 = load i8*, i8** %2
  %25 = getelementptr inbounds i8, i8* %24, i32 1
  store i8* %25, i8** %2
  br label %10
26:
  %27 = load i8*, i8** %2
  %28 = load i8, i8* %27
  %29 = icmp ne i8 %28, 0
  br i1 %29, label %30, label %51
30:
  %31 = load i32, i32* %3
  %32 = add nsw i32 %31, 1
  store i32 %32, i32* %3
  br label %33
33:
  %34 = load i8*, i8** %2
  %35 = load i8, i8* %34
  %36 = sext i8 %35 to i32
  %37 = icmp ne i32 %36, 0
  br i1 %37, label %38, label %45
38:
  %39 = load i8*, i8** %2
  %40 = load i8, i8* %39
  %41 = sext i8 %40 to i32
  %42 = call i32 @isspace(i32 %41)
  %43 = icmp ne i32 %42, 0
  %44 = xor i1 %43, true
  br label %45
45:
  %46 = phi i1 [ false, %33 ], [ %44, %38 ]
  br i1 %46, label %47, label %50
47:
  %48 = load i8*, i8** %2
  %49 = getelementptr inbounds i8, i8* %48, i32 1
  store i8* %49, i8** %2
  br label %33
50:
  br label %51
51:
  br label %5
52:
  %53 = load i32, i32* %3
  ret i32 %53
}
declare i32 @isspace(i32)
